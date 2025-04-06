# liblcf

liblcf is a library to handle RPG Maker 2000 and 2003 game data.
It can read and write LCF and XML files.

liblcf is part of the EasyRPG Project. More information is available
at the project website: https://easyrpg.org/


## Documentation

Documentation is available at the documentation wiki: https://wiki.easyrpg.org


## Requirements

- [inih] for INI file reading. (required when building EasyRPG Player)
- [Expat] for XML reading support.
- [ICU] for character encoding detection and conversion (recommended). When disabled only Windows-1252 is supported.


## Source code

liblcf development is hosted by GitHub, project files are available
in this git repository:

https://github.com/EasyRPG/liblcf

Released versions are also available at our Download Archive:

https://easyrpg.org/downloads/


## Building

### Autotools Makefile method:

Building requirements:

- pkg-config
- GNU make

Step-by-step instructions:

    tar xf liblcf-0.8.1.tar.xz # unpack the tarball
    cd liblcf-0.8.1            # enter in the package directory
    ./configure --prefix /usr  # find libraries, set options
    make                       # compile the library
    sudo make install          # install system-wide

Additional building requirements when using the source tree (git):

- autoconf >= 2.69
- automake >= 1.11.4
- libtool

To generate the "configure" script, run before following the above section:

    autoreconf -i

Read more detailed instructions at:

https://wiki.easyrpg.org/development/compiling/liblcf/autotools


### CMake method:

Building requirements:

- pkg-config (Not on Windows)
- CMake >= 3.10

Step-by-step instructions:

    tar xf liblcf-0.8.1.tar.xz            # unpack the tarball
    cd liblcf-0.8.1                       # enter in the package directory
    cmake . -DCMAKE_BUILD_TYPE=Release    # configure project
    cmake --build .                       # compile the library
    sudo cmake --build . --target install # install system-wide

Read more detailed instructions at:

https://wiki.easyrpg.org/development/compiling/liblcf/cmake

CMake is the only supported way to build liblcf for Windows. All dependencies
must be installed with [vcpkg].


## Tools

### LCF2XML

LCF2XML is a small tool to convert RPG Maker 2000 and 2003 data format
(LMU, LMT, LDB, LSD, ...) to XML and vice-versa.

### LCFSTRINGS

LCFSTRINGS is a small tool to list the strings used for the text and filenames from LMU, LMT, LDB and LSD files.


## Bug reporting

Available options:

* File an issue at https://github.com/EasyRPG/liblcf/issues
* Open a thread at https://community.easyrpg.org/
* Chat with us via IRC: [#easyrpg at irc.libera.chat]


## License

liblcf is Free/Libre Open Source Software, released under the MIT License.
See the file [COPYING] for copying conditions.

### 3rd party software

liblcf includes code of the following 3rd party software:

- [inih] under New BSD license.
- [span-lite] under Boost Software License, Version 1.0.

See the source code comment headers for license details.


[Expat]: https://libexpat.github.io
[ICU]: http://icu-project.org
[vcpkg]: https://github.com/Microsoft/vcpkg
[#easyrpg at irc.libera.chat]: https://kiwiirc.com/nextclient/#ircs://irc.libera.chat/#easyrpg?nick=rpgguest??
[COPYING]: COPYING
[inih]: https://github.com/benhoyt/inih
[string-view-lite]: https://github.com/martinmoene/string-view-lite
[span-lite]: https://github.com/martinmoene/span-lite
