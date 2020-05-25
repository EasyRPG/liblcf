#include <iostream>
#include "lcf/ldb/reader.h"

using namespace lcf;

int main(int argc, char** argv) {
	if (argc < 2) {
		std::cerr << "Must specify a file!" << std::endl;
		return 1;
	}
	const auto& infile = argv[1];
	auto rc = LDB_Reader::Load(infile, "");
	if (!rc) {
		std::cerr << "Failed to load file : " << infile << std::endl;
		return 1;
	}
	return 0;
}
