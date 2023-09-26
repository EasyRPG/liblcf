#include <lcf/ldb/reader.h>
#include <lcf/lmt/reader.h>
#include <lcf/lmu/reader.h>
#include <lcf/lsd/reader.h>
#include <lcf/reader_lcf.h>
#include <lcf/reader_util.h>
#include <sstream>

std::string lmu2xml(const std::string& in, std::string engine, std::string encoding);

std::string lsd2xml(const std::string& in, std::string engine, std::string encoding);

std::string ldb2xml(const std::string& in, std::string encoding);

std::string lmt2xml(const std::string& in, std::string engine, std::string encoding);

std::string xml2lmu(const std::string& in, std::string engine, std::string encoding);

std::string xml2lsd(const std::string& in, std::string engine, std::string encoding);

std::string xml2ldb(const std::string& in, std::string encoding);

std::string xml2lmt(const std::string& in, std::string engine, std::string encoding);