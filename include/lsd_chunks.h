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

#ifndef _LSD_READER_CHUNKS_H_
#define _LSD_READER_CHUNKS_H_

////////////////////////////////////////////////////////////
/// LSD Reader namespace
////////////////////////////////////////////////////////////
namespace LSD_Reader {
	namespace ChunkSave {
		enum ChunkSave {
			Unknown64		= 0x64, // ? chunks
			Unknown65		= 0x65, // ? chunks
			Unknown66		= 0x66, // ? chunks
			Unknown67		= 0x67, // ? array
			Unknown68		= 0x68, // ? chunks
			Unknown69		= 0x69, // ? chunks (like 68, vehicle?)
			Unknown6A		= 0x6A, // ? chunks (like 69, vehicle?)
			Unknown6B		= 0x6B, // ? chunks (like 6A, vehicle?)
			Unknown6C		= 0x6C, // ? array (of actors)
			Unknown6D		= 0x6D, // ?
			Unknown6E		= 0x6E, // ? [01 00 00] chunks?
			Unknown6F		= 0x6F, // ?
			Unknown70		= 0x70, // ? [00] chunks?
			Unknown71		= 0x71, // ? [01 01 00 00] chunks?
			Unknown72		= 0x72, // ? array
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown64 {
		enum ChunkUnknown64 {
			Unknown01		= 0x01, // ?
			Unknown0B		= 0x0B, // char[]: hero name
			Unknown0C		= 0x0C, // int: hero level
			Unknown0D		= 0x0D, // int: hero HP
			Unknown15		= 0x15, // char[]: face filename
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown65 {
		enum ChunkUnknown65 {
			Unknown01		= 0x01, // ?
			Unknown0B		= 0x0B, // ?
			Unknown1F		= 0x1F, // int: 214 (size of chunk 0x20?)
			Unknown20		= 0x20, // 214 x 0/1 (switches)
			Unknown21		= 0x21, // int: 40 (size of chunk 0x22?)
			Unknown22		= 0x22, // not chunked; 40 x 4-bytes (LE 32-bit int?) (variables?)
			Unknown33		= 0x33, // face filename
			Unknown34		= 0x34, // ?
			Unknown37		= 0x37, // ?
			Unknown47		= 0x47, // 47-4A all [01 00 00]
			Unknown48		= 0x48, // ?
			Unknown49		= 0x49, // ?
			Unknown4A		= 0x4A, // ?
			Unknown4B		= 0x4B, // chunks: 01: music filename, 02: fade-in, 03: vol, 04: Tempo?
			Unknown4C		= 0x4C, // chunks: 01: "(OFF)"
			Unknown4D		= 0x4D, // chunks: 01: music filename, 03: ?
			Unknown4E		= 0x4E, // chunks: 01: music filename, 03: ?
			Unknown4F		= 0x4F, // 4F-66 all [01 00 00]
			Unknown50		= 0x50, // ?
			Unknown51		= 0x51, // ?
			Unknown52		= 0x52, // ?
			Unknown5B		= 0x5B, // ?
			Unknown5C		= 0x5C, // ?
			Unknown5D		= 0x5D, // ?
			Unknown5E		= 0x5E, // ?
			Unknown5F		= 0x5F, // ?
			Unknown60		= 0x60, // ?
			Unknown61		= 0x61, // ?
			Unknown62		= 0x62, // ?
			Unknown63		= 0x63, // ?
			Unknown64		= 0x64, // ?
			Unknown65		= 0x65, // ?
			Unknown66		= 0x66, // ?
			Unknown6F		= 0x6F, // 6F-7F all [FF]
			Unknown70		= 0x70, // ?
			Unknown71		= 0x71, // ?
			Unknown72		= 0x72, // ?
			Unknown73		= 0x73, // ?
			Unknown74		= 0x74, // ?
			Unknown81		= 0x81, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown66 {
		enum ChunkUnknown66 {
			Unknown1E		= 0x1E, // ? int
			Unknown1F		= 0x1F, // ? int
			Unknown20		= 0x20, // ? int
			Unknown29		= 0x29, // ? int
			Unknown2A		= 0x2A, // ? int
			Unknown2B		= 0x2B, // ? int
			Unknown2C		= 0x2C, // ? int
			Unknown2D		= 0x2D, // ? int
			Unknown31		= 0x31, // ? int
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown67 {
		enum ChunkUnknown67 {
			Unknown02		= 0x02, // ? [00 00 00 00 00 00/80 xx xx]
			Unknown03		= 0x03, // ? [00 00 00 00 00 00/80 xx xx]
			Unknown04		= 0x04, // ? [00 00 00 00 00 00/80 xx xx]
			Unknown05		= 0x05, // ? [00 00 00 00 00 00/80 xx xx]
			Unknown08		= 0x08, // ? [00 00 00 00 00 00/80 xx xx]
			Unknown09		= 0x09, // ? int: 1
			Unknown12		= 0x12, // ? [00 00 00 00 00 00/80 xx xx]
			Unknown1F		= 0x1F, // ? [00 00 00 00 00 00/80 xx xx]
			Unknown20		= 0x20, // ? [00 00 00 00 00 00/80 xx xx]
			Unknown22		= 0x22, // ? int: 10/100
			Unknown23		= 0x23, // ? int: 100
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown68 {
		enum ChunkUnknown68 {
			Unknown0B		= 0x0B, // ?
			Unknown0C		= 0x0C, // ?
			Unknown0D		= 0x0D, // ?
			Unknown15		= 0x15, // ?
			Unknown16		= 0x16, // ?
			Unknown21		= 0x21, // ?
			Unknown23		= 0x23, // ?
			Unknown25		= 0x25, // ?
			Unknown29		= 0x29, // ? chunks: 0B 0C 15
			Unknown34		= 0x34, // ?
			Unknown35		= 0x35, // ?
			Unknown36		= 0x36, // ?
			Unknown3E		= 0x3E, // ?
			Unknown3F		= 0x3F, // ?
			Unknown49		= 0x49, // ? char[]: sprite filename
			Unknown4A		= 0x4A, // ?
			Unknown4B		= 0x4B, // ?
			Unknown51		= 0x51, // ?
			Unknown52		= 0x52, // ?
			Unknown53		= 0x53, // ?
			Unknown79		= 0x79, // ?
			Unknown7C		= 0x7C, // ?
			Unknown83		= 0x83, // ?
			Unknown84		= 0x84, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown6C {
		enum ChunkUnknown6C {
			Unknown01		= 0x01, // ?
			Unknown02		= 0x02, // ?
			Unknown1F		= 0x1F, // int: level?
			Unknown20		= 0x20, // int: EXP
			Unknown21		= 0x21, // ?
			Unknown22		= 0x22, // ?
			Unknown33		= 0x33, // ?
			Unknown34		= 0x34, // short[]: skills
			Unknown3D		= 0x3D, // short[5]: equipped items
			Unknown47		= 0x47, // int: HP
			Unknown48		= 0x48, // int: MP
			Unknown50		= 0x50, // ?
			Unknown51		= 0x51, // ?
			Unknown52		= 0x52, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown6D {
		enum ChunkUnknown6D {
			Unknown01		= 0x01, // ?
			Unknown02		= 0x02, // ?
			Unknown0B		= 0x0B, // ?
			Unknown0C		= 0x0C, // short[]: item list
			Unknown0D		= 0x0D, // ?
			Unknown0E		= 0x0E, // ?
			Unknown15		= 0x15, // int: gold
			Unknown20		= 0x20, // ?
			Unknown23		= 0x23, // ?
			Unknown29		= 0x29, // ?
			Unknown2A		= 0x2A, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown6F {
		enum ChunkUnknown6F {
			Unknown0B		= 0x0B, // ? array
			Unknown15		= 0x15, // ? [00 01 02 ... 8E 8F]
			Unknown16		= 0x16, // ? ditto
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown6F0B {
		enum ChunkUnknown6F0B {
			Unknown01		= 0x01, // ?
			Unknown0B		= 0x0B, // ?
			Unknown0C		= 0x0C, // ?
			Unknown0D		= 0x0D, // ?
			Unknown15		= 0x15, // ?
			Unknown16		= 0x16, // ?
			Unknown20		= 0x20, // ?
			Unknown21		= 0x21, // ?
			Unknown23		= 0x23, // ?
			Unknown25		= 0x25, // ?
			Unknown29		= 0x29, // ?
			Unknown34		= 0x34, // int:
			Unknown35		= 0x35, // ?
			Unknown36		= 0x36, // ?
			Unknown4A		= 0x4A, // ?
			Unknown4B		= 0x4B, // ?
			Unknown6C		= 0x6C, // ?
			END				= 0x00	// End of chunk
		};
	}
	namespace ChunkUnknown72 {
		enum ChunkUnknown72 {
			Unknown01		= 0x01,	// ? chunks: 01
			END				= 0x00	// End of chunk
		};
	}
}

#endif
