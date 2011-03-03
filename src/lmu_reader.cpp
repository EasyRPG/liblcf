/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "lmu_reader.h"
#include "lmu_chunks.h"
#include "reader.h"
#include "reader_util.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Load Map
////////////////////////////////////////////////////////////
std::auto_ptr<RPG::Map> LMU_Reader::LoadMap(const std::string& filename) {
	Reader reader(filename, ReaderUtil::GetEncoding());
	if (!reader.IsOk()) {
		Reader::SetError("Couldn't find %s map file.\n", filename.c_str());
		return std::auto_ptr<RPG::Map>(NULL);
	}
	std::string header = reader.ReadString(reader.ReadInt());
	if (header != "LcfMapUnit") {
		Reader::SetError("%s is not a valid RPG2000 map.\n", filename.c_str());
		return std::auto_ptr<RPG::Map>(NULL);
	}

	RPG::Map* map = new RPG::Map();
	Struct<RPG::Map>::ReadLcf(*map, reader);
	return std::auto_ptr<RPG::Map>(map);
}
