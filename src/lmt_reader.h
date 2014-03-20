/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_LMT_READER_H
#define LCF_LMT_READER_H

#include <string>
#include "reader_lcf.h"
#include "writer_lcf.h"
#include "writer_xml.h"
#include "rpg_treemap.h"

/**
 * LMT Reader namespace.
 */
namespace LMT_Reader {
	bool Load(const std::string &filename, const std::string &encoding);
	bool Save(const std::string& filename, const std::string &encoding);
	bool SaveXml(const std::string& filename);
	bool LoadXml(const std::string &filename);
}

#endif
