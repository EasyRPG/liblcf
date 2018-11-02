#!/usr/bin/env python

from __future__ import division

import sys
import os
import re
import shutil
import filecmp
from collections import namedtuple, OrderedDict
from itertools import groupby
import operator

from jinja2 import Environment, PackageLoader, select_autoescape
env = Environment(
    loader=PackageLoader('templates', ''),
    autoescape=select_autoescape([]),
    keep_trailing_newline=True,
    lstrip_blocks=True
)

gen_dir = os.path.dirname(os.path.abspath(__file__))
csv_dir = os.path.join(gen_dir, "csv")
dest_dir = os.path.abspath(os.path.join(gen_dir, "..", "src", "generated"))
tmp_dir = os.path.join(dest_dir, "tmp")

cpp_types = {
    'Boolean': 'bool',
    'Double': 'double',
    'UInt8': 'uint8_t',
    'UInt16': 'uint16_t',
    'UInt32': 'uint32_t',
    'Int8': 'int8_t',
    'Int16': 'int16_t',
    'Int32': 'int32_t',
    'String': 'std::string',
}

# Additional Jinja 2 functions
def lcf_type(field, prefix=True):
    if field.size == True:
        if re.match(r'Count<(.*)>', field.type):
            return "COUNT"
        else:
            return "SIZE"
    if field.type == "DatabaseVersion":
        return "DATABASE_VERSION"
    if field.type == "EmptyBlock":
        return "EMPTY"
    return "TYPED"

def cpp_type(ty, prefix=True):
    if ty in cpp_types:
        return cpp_types[ty]

    if ty == "DatabaseVersion":
        return 'int32_t'

    if ty == "EmptyBlock":
        return 'void'

    m = re.match(r'Count<(.*)>', ty)
    if m:
        return cpp_type(m.group(1), prefix)

    m = re.match(r'Array<(.*):(.*)>', ty)
    if m:
        return 'std::vector<%s>' % cpp_type(m.group(1), prefix)

    m = re.match(r'(Vector|Array)<(.*)>', ty)
    if m:
        return 'std::vector<%s>' % cpp_type(m.group(2), prefix)

    m = re.match(r'Ref<(.*):(.*)>', ty)
    if m:
        return cpp_type(m.group(2), prefix)

    m = re.match(r'Ref<(.*)>', ty)
    if m:
        return 'int32_t'

    m = re.match(r'Enum<(.*)>', ty)
    if m:
        return 'int32_t'

    m = re.match(r'(.*)_Flags$', ty)
    if m:
        ty = m.expand(r'\1::Flags')
        if prefix:
            ty = 'RPG::' + ty
        return ty

    if prefix:
        ty = 'RPG::' + ty

    return ty

def pod_default(field):
    dfl = field.default
    ftype = field.type

    # Not a POD, no default
    if dfl == '' or dfl == '\'\'' or ftype.startswith('Vector') or ftype.startswith('Array'):
        return ""

    if ftype == 'Boolean':
        dfl = dfl.lower()
    elif ftype == 'String':
        dfl = '"' + dfl[1:-1] + '"'
    if '|' in dfl:
        dfl = -1

    if ftype == 'Double':
        dfl = float(dfl)

    return " = " + str(dfl)

def num_flags(flag):
    return len(flag)

def flag_size(flag):
    return (len(flag) + 7) // 8

def flag_set(field, bit):
    bit -= 1
    try:
        res = bool(int(field.default) & (1 << bit))
    except ValueError:
        # Default was not an int
        res = False

    return str(res).lower()

def filter_structs_without_codes(structs):
    for struct in structs:
        if all(f.code for f in sfields[struct.name]):
            yield struct

def filter_unused_fields(fields):
    for field in fields:
        if field.type and field.type != "EmptyBlock":
            yield field

def filter_unwritten_fields(fields):
    for field in fields:
        if field.type:
            yield field
# End of Jinja 2 functions

int_types = {
    'UInt8': 'uint8_t',
    'UInt16': 'uint16_t',
    'UInt32': 'uint32_t',
    'Int16': 'int16_t',
    'Int32': 'int32_t'
}

def struct_headers(ty, header_map):
    if ty == 'String':
        return ['<string>']

    if ty in int_types or ty == "DatabaseVersion":
        return ['<stdint.h>']

    if ty in cpp_types:
        return []

    m = re.match(r'Ref<(.*):(.*)>', ty)
    if m:
        return struct_headers(m.group(2), header_map)

    if re.match(r'Ref<(.*)>', ty):
        return []

    if re.match(r'Enum<(.*)>', ty):
        return ['"enum_tags.h"']

    if re.match(r'(.*)_Flags$', ty):
        return ['<array>']

    m = re.match(r'Array<(.*):(.*)>', ty)
    if m:
        return ['<vector>'] + struct_headers(m.group(1), header_map)

    m = re.match(r'(Vector|Array)<(.*)>', ty)
    if m:
        return ['<vector>'] + struct_headers(m.group(2), header_map)

    header = header_map.get(ty)
    if header is not None:
        return ['"rpg_%s.h"' % header]

    if ty in ['Parameters', 'Equipment', 'EventCommand', 'MoveCommand', 'Rect', 'TreeMap']:
        return ['"rpg_%s.h"' % ty.lower()]

    return []

def process_file(filename, namedtup):
    # Mapping is: All elements of the line grouped by the first column

    result = OrderedDict()

    with open(os.path.join(csv_dir, filename), 'r') as f:
        lines = []
        for line in f:
            sline = line.strip()
            if not sline:
                continue
            if sline.startswith("#"):
                continue
            lines.append(sline.split(','))

        for k, g in groupby(lines, operator.itemgetter(0)):
            result[k] = list(map(lambda x: namedtup(*x[1:]), list(g)))

    return result

def get_structs(filename='structs.csv'):
    Struct = namedtuple("Struct", "name hasid iscomparable")

    result = process_file(filename, Struct)

    processed_result = OrderedDict()

    for k, struct in result.items():
        processed_result[k] = []

        for elem in struct:
            elem = Struct(elem.name, bool(int(elem.hasid)) if elem.hasid else None, bool(int(elem.iscomparable)))
            processed_result[k].append(elem)

    return processed_result

def get_fields(filename='fields.csv'):
    Field = namedtuple("Field", "name size type code default presentifdefault is2k3 comment")

    result = process_file(filename, Field)

    processed_result = OrderedDict()

    for k, field in result.items():
        processed_result[k] = []
        for elem in field:
            elem = Field(
                elem.name,
                True if elem.size == 't' else False,
                elem.type,
                0 if elem.code == '' else int(elem.code, 0),
                elem.default,
                elem.presentifdefault,
                elem.is2k3,
                elem.comment)
            processed_result[k].append(elem)

    return processed_result

def get_enums(filename='enums.csv'):
    result = process_file(filename, namedtuple("Enum", "entry value index"))
    new_result = OrderedDict()

    # Additional processing to group by the Enum Entry
    # Results in e.g. EventCommand -> Code -> List of (Name, Index)
    for k, v in result.items():
        new_result[k] = OrderedDict()
        for kk, gg in groupby(v, operator.attrgetter("entry")):
            new_result[k][kk] = list(map(lambda x: (x.value, x.index), gg))

    return new_result

def get_flags(filename='flags.csv'):
    return process_file(filename, namedtuple("Flag", "field is2k3"))

def get_setup(filename='setup.csv'):
    return process_file(filename, namedtuple("Setup", "method headers"))

def get_headers():
    header_map = dict()

    structs_flat = []
    for filetype, struct in structs.items():
        for elem in struct:
            structs_flat.append(elem)
            header_map[elem.name] = elem.name.lower()

    result = {}
    for struct in structs_flat:
        struct_name = struct.name
        if struct_name not in sfields:
            continue
        headers = set()
        for field in sfields[struct_name]:
            ftype = field.type
            if not ftype:
                continue
            headers.update(struct_headers(ftype, header_map))
        if struct_name in setup:
            for s in setup[struct_name]:
                if s.headers:
                    headers.update([s.headers])
        result[struct_name] = sorted(x for x in headers if x[0] == '<') + sorted(x for x in headers if x[0] == '"')
    return result

def needs_ctor(struct_name):
    return struct_name in setup and any('Init()' in method
                                    for method, hdrs in setup[struct_name])

def generate():
    if not os.path.exists(tmp_dir):
        os.mkdir(tmp_dir)
    for filetype in ['ldb','lmt','lmu','lsd']:
        filepath = os.path.join(tmp_dir, '%s_chunks.h' % filetype)

        with open(filepath, 'w') as f:
            f.write(chunk_tmpl.render(
                type=filetype
            ))

    for filetype, structlist in structs.items():
        for struct in structlist:
            filename = struct.name.lower()

            if struct.hasid is not None:
                if struct.name not in sfields:
                    continue

                filepath = os.path.join(tmp_dir, '%s_%s.cpp' % (filetype, filename))
                with open(filepath, 'w') as f:
                    f.write(lcf_struct_tmpl.render(
                        struct_name=struct.name,
                        type=filetype
                    ))

                if needs_ctor(struct.name):
                    filepath = os.path.join(tmp_dir, 'rpg_%s.cpp' % filename)
                    with open(filepath, 'w') as f:
                        f.write(rpg_source_tmpl.render(
                            struct_name=struct.name,
                            filename=filename
                        ))

            filepath = os.path.join(tmp_dir, 'rpg_%s.h' % filename)
            with open(filepath, 'w') as f:
                f.write(rpg_header_tmpl.render(
                    struct_name=struct.name,
                    has_id=struct.hasid,
                    is_comparable=struct.iscomparable
                ))

            if struct.name in flags:
                filepath = os.path.join(tmp_dir, '%s_%s_flags.h' % (filetype, filename))
                with open(filepath, 'w') as f:
                    f.write(flags_tmpl.render(
                        struct_name=struct.name,
                        type=filetype
                    ))

    filepath = os.path.join(tmp_dir, 'rpg_enums.cpp')

    with open(filepath, 'w') as f:
        f.write(enums_tmpl.render())

    for tmp_file in os.listdir(tmp_dir):
        tmp_path = os.path.join(tmp_dir, tmp_file)
        dest_path = os.path.join(dest_dir, tmp_file)
        if not (os.path.exists(dest_path) and filecmp.cmp(tmp_path, dest_path)):
            shutil.copyfile(tmp_path, dest_path)
        os.remove(tmp_path)
    os.rmdir(tmp_dir)

def main(argv):
    if not os.path.exists(dest_dir):
        os.mkdir(dest_dir)

    global structs, sfields, enums, flags, setup, headers
    global chunk_tmpl, lcf_struct_tmpl, rpg_header_tmpl, rpg_source_tmpl, flags_tmpl, enums_tmpl

    structs = get_structs()
    sfields = get_fields()
    enums = get_enums()
    flags = get_flags()
    setup = get_setup()
    headers = get_headers()

    # Setup Jinja
    env.filters["lcf_type"] = lcf_type
    env.filters["cpp_type"] = cpp_type
    env.filters["pod_default"] = pod_default
    env.filters["struct_has_code"] = filter_structs_without_codes
    env.filters["field_is_used"] = filter_unused_fields
    env.filters["field_is_written"] = filter_unwritten_fields
    env.filters["num_flags"] = num_flags
    env.filters["flag_size"] = flag_size
    env.filters["flag_set"] = flag_set
    env.tests['needs_ctor'] = needs_ctor

    globals = dict(
        structs=structs,
        fields=sfields,
        flags=flags,
        enums=enums,
        setup=setup,
        headers=headers
    )

    chunk_tmpl = env.get_template('chunks.tmpl', globals=globals)
    lcf_struct_tmpl = env.get_template('reader.tmpl', globals=globals)
    rpg_header_tmpl = env.get_template('rpg_header.tmpl', globals=globals)
    rpg_source_tmpl = env.get_template('rpg_source.tmpl', globals=globals)
    flags_tmpl = env.get_template('flag_reader.tmpl', globals=globals)
    enums_tmpl = env.get_template('rpg_enums.tmpl', globals=globals)

    generate()

if __name__ == '__main__':
    main(sys.argv)
