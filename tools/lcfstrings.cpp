/*
 * Copyright (c) 2020 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#include <cstring>
#include <iostream>
#include <string>

#include <lcf/context.h>
#include <lcf/data.h>
#include <lcf/ldb/reader.h>
#include <lcf/lmt/reader.h>
#include <lcf/lmu/reader.h>
#include <lcf/lsd/reader.h>


static bool HasExt(const std::string& path, const std::string& ext) {
	if (path.size() < ext.size()) {
		return false;
	}
	for (size_t i = 0; i < ext.size(); ++i) {
		if (std::tolower(path[path.size()-i-1]) != ext[ext.size()-i-1]) {
			return false;
		}
	}
	return true;
}

int index_off = 0;
std::string delim = "::";

static void print_ctx_info(const lcf::ContextNameBase* ctx) {
	std::cout << ctx->name;

	if (ctx->index != -1) {
		if (delim == ".") {
			std::cout << delim << (ctx->index + index_off);
		} else {
			std::cout << "[" << (ctx->index + index_off) << "]";
		}
	}
}

// Needed to stop top level parent recursion
static void print_parent(const void*) {
}

template <typename ContextType>
static void print_parent(const ContextType* ctx) {
	if (!ctx) {
		return;
	}

	print_parent(ctx->parent);

	if (ctx->parent) {
		std::cout << delim;
	}
	print_ctx_info(ctx);
}

template <typename ContextType>
static void print(const lcf::DBString& field, const ContextType& ctx) {
	print_parent(ctx.parent);

	std::cout << delim << ctx.name << "=" << field << "\n";
}

template <typename T>
void Dump(T& t) {
	ForEachString(t, [](const auto& field, auto& ctx) {
		if (!field.empty()) {
			print(field, ctx);
		}
	});
}

static int print_help(char** argv) {
	std::cerr << "lcfstrings - Extract all strings contained in RPG Maker 2000/2003 Files" << std::endl;
	std::cerr << "Usage: " << argv[0] << " [OPTION...] FILE [ENCODING]" << std::endl;
	std::cerr << "Options:" << std::endl;
	std::cerr << "  -1, --one     Print using a one-based (Delphi) array index" << std::endl;
	std::cerr << "  -h, --help    This usage message" << std::endl;
	std::cerr << "  -s, --simple  Print field path in a django-like way" << std::endl;
	return 2;
}

int main(int argc, char** argv) {
	std::string path;
	std::string encoding;

	if (argc <= 1) {
		return print_help(argv);
	}

	/* parse command line arguments */
	for (int i = 1; i < argc; ++i) {
		std::string arg = argv[i];

		if ((arg == "--help") || (arg == "-h")) {
			return print_help(argv);
		} else if ((arg == "--one") || (arg == "-1")) {
			index_off = 1;
		} else if ((arg == "--simple") || (arg == "-s")) {
			delim = ".";
		} else {
			path = arg;
			if (i+1 < argc) {
				encoding = argv[i+1];
			}
			break;
		}
	}

	if (path.empty()) {
		return print_help(argv);
	}

	bool rc = false;

	if (HasExt(path, ".ldb")) {
		rc = lcf::LDB_Reader::Load(path, encoding);
		if (rc) Dump(lcf::Data::data);
	} else if (HasExt(path, ".lmt")) {
		rc = !lcf::LMT_Reader::Load(path, encoding);
		if (rc) Dump(lcf::Data::treemap);
	} else if (HasExt(path, ".lmu")) {
		auto file = lcf::LMU_Reader::Load(path, encoding);
		rc = bool(file);
		if (rc) Dump(*file);
	} else if (HasExt(path, ".lsd")) {
		auto file = lcf::LSD_Reader::Load(path, encoding);
		rc = bool(file);
		if (rc) Dump(*file);
	} else {
		std::cerr << "Unknown file type!" << std::endl;
	}

	return !rc;
}

