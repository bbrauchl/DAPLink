/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

static const uint32_t rza1xx_flash_prog_blob[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x41f0e92d, 0x4efa4604, 0xf0106830, 0xd07d0f01, 0x4ff76961, 0xf44f220e, 0x3f184380, 0xf0004638,
    0x4df3fafb, 0x087ff44f, 0x3d246960, 0xf894b160, 0x22101046, 0x46284643, 0xfaeef000, 0x06bb6821,
    0x4638221e, 0xfae8f000, 0x220c69a1, 0x5380f44f, 0xf0004638, 0x69a0fae1, 0xf894b168, 0x23ff1047,
    0x46282200, 0xfad8f000, 0x221c6861, 0x5340f04f, 0xf0004638, 0x69e1fad1, 0xf44f2208, 0x46386370,
    0xfacaf000, 0xb17069e0, 0x220048d9, 0xf04f6ca1, 0x382033ff, 0xfac0f000, 0x221868a1, 0x7340f04f,
    0xf0004638, 0x6a21fab9, 0x220423f0, 0xf0004638, 0x6a20fab3, 0xf814b328, 0x22181f4c, 0xf04f4dcc,
    0x3d1c437f, 0xf0004628, 0x7861faa7, 0x46432210, 0xf0004628, 0x78a1faa1, 0xf44f2208, 0x4628437f,
    0xfa9af000, 0x23ff78e1, 0x46282200, 0xfa94f000, 0x1c40f854, 0x3c4c2214, 0x1340f44f, 0xf0004638,
    0x220ffa8b, 0x4300f44f, 0xe0004638, 0x6b61e027, 0xfa82f000, 0xf44f6b60, 0xb1783840, 0x1044f894,
    0x4db32210, 0x35184643, 0xf0004628, 0xf894fa75, 0x23071045, 0x46282200, 0xfa6ef000, 0x230f6a61,
    0x46382200, 0xfa68f000, 0x6a604da9, 0xb1d83d48, 0xd0072808, 0xd00a280c, 0xd00d280f, 0x2001e00e,
    0x81f0e8bd, 0x0058f894, 0x0040f885, 0xf8b4e006, 0xf8a50058, 0xe0010040, 0x64286da0, 0x69212210,
    0x46384643, 0xfa48f000, 0x8264f8df, 0x7780f44f, 0x22086aa1, 0xf1a8463b, 0x46400828, 0xfa3cf000,
    0x23046ae1, 0x46402202, 0xfa36f000, 0x23026b21, 0x46402201, 0xfa30f000, 0x4f8d463b, 0x22086ba1,
    0x4638371c, 0xfa28f000, 0x23106be1, 0x46382204, 0xfa22f000, 0x23016c21, 0x46382200, 0xfa1cf000,
    0x22002301, 0x46404619, 0xfa16f000, 0xf0106830, 0xd0fb0f01, 0x28086a60, 0x280cd004, 0x280fd005,
    0xe006d005, 0x0038f895, 0x8f28e002, 0x6ba8e000, 0x20006520, 0x2100e7a4, 0x60016141, 0x1046f880,
    0x60416181, 0x1047f880, 0x638161c1, 0x64816081, 0x63c16201, 0xf88060c1, 0xf880104c, 0xf880104d,
    0xf880104e, 0x6341104f, 0x1044f880, 0x1045f880, 0x64016241, 0x62816101, 0x630162c1, 0xb5704770,
    0x48644606, 0x4448460d, 0xffd5f7ff, 0x22004c61, 0x444c2001, 0x61606022, 0x6046f884, 0x200ae9c4,
    0x20086320, 0x61226422, 0x65e265a2, 0x46206260, 0xfeb6f7ff, 0xd1022800, 0x1050f894, 0xbd707029,
    0x2000b538, 0x1e424954, 0x1c40c104, 0xdbfb2810, 0x48522101, 0x68006001, 0x0035f241, 0x82084950,
    0x4950200f, 0x484f8008, 0x78013030, 0x0108f021, 0x78007001, 0x48462200, 0x46112301, 0xf000383c,
    0x4c43f99b, 0x6ca13c48, 0xd4fc0789, 0x23032200, 0x46204611, 0xf990f000, 0xf8b14943, 0xf0400224,
    0xf8a100fc, 0x48410224, 0x1324f8b0, 0x01fcf021, 0x1324f8a0, 0x8801483e, 0x01fcf041, 0x483d8001,
    0xf0218801, 0x800101fc, 0x8801483b, 0x01fcf021, 0x483a8001, 0xf0418801, 0x800101fc, 0x49386820,
    0x60204308, 0xf0206820, 0xf0400078, 0x60200020, 0x49346860, 0x60604008, 0xf2406de0, 0x43881111,
    0x68a065e0, 0x7103f64f, 0xf4404388, 0x60a07000, 0xf88d2000, 0x20050000, 0xf7ff4669, 0xb108ff70,
    0xbd382001, 0x0000f89d, 0x003cf020, 0x0140f040, 0xf88d2001, 0xf0001000, 0x221ff946, 0xf04f2101,
    0x46204300, 0xf938f000, 0x20006820, 0xb510bd38, 0x4c0f221f, 0xf04f2100, 0x3c484300, 0xf0004620,
    0x2100f92b, 0x221060e1, 0x21eb4809, 0x037ff44f, 0xf0003838, 0x4806f921, 0x22002307, 0x38342101,
    0xf91af000, 0x7103f64f, 0x200061e1, 0x0000bd10, 0x3fefa048, 0x00000004, 0xe8201180, 0x3fffff80,
    0xfcfe0000, 0xfcfe0408, 0xfcfe7000, 0xfcfe3000, 0xfcfe3524, 0xfcfe3624, 0xfcfe3a24, 0xfcfe3424,
    0x00fff300, 0xfffcfcfc, 0xf000b510, 0x2800f924, 0x4899d1dc, 0xf7ff4448, 0x4897feee, 0x44482101,
    0x21006141, 0x21c76001, 0x1046f880, 0xfdd8f7ff, 0xd1cb2800, 0x4010e8bd, 0xb901f000, 0xb510e7c6,
    0xf0004604, 0x2800f908, 0x488bd1c0, 0xf7ff4448, 0x4889fed2, 0x22202101, 0x61414448, 0x60012100,
    0x2046f880, 0x63812207, 0x61c26484, 0xf7ff6081, 0x2800fdb7, 0xe8bdd1aa, 0xf0004010, 0xe7a5b8e0,
    0x47f0e92d, 0x4616000c, 0xd0564605, 0xf8e3f000, 0xd1522800, 0x44484878, 0xfeadf7ff, 0xf04f4f76,
    0xf04f0a00, 0x22020801, 0x4638444f, 0xa000f8c7, 0x8014f8c7, 0x2046f887, 0xf8c72207, 0xf8c7a038,
    0xf8c7a008, 0x64bd8028, 0xf7ff61fa, 0x2800fd89, 0x4638d133, 0xfe8ff7ff, 0x8028f8c7, 0x8030f8c7,
    0xf8c746d0, 0xf8c7a010, 0xe020a040, 0xd3052c04, 0x6278200f, 0x68302504, 0xe00c65b8, 0xd3052c02,
    0x6278200c, 0x88302502, 0xe00465b8, 0x25012008, 0x78306278, 0x42ac65b8, 0xf8c7d801, 0x48568028,
    0xf7ff4448, 0x2800fd5d, 0x1b64d107, 0x2c00442e, 0xe8bdd1dc, 0xf00047f0, 0xe8bdb882, 0xe92d87f0,
    0x468247f0, 0x4616484c, 0x4448460d, 0xfe53f7ff, 0xf04f4f49, 0x24010800, 0x444f2103, 0xf8c74638,
    0x617c8000, 0x1046f887, 0xf8c72107, 0xf8c78038, 0xf8c7a048, 0x62bc8008, 0xf7ff61f9, 0xbb98fd31,
    0xf7ff4638, 0x62bcfe38, 0x8010f8c7, 0x8040f8c7, 0xe02d62fc, 0xd3032d04, 0x2404200f, 0xe0086278,
    0xd3032d02, 0x2402200c, 0xe0026278, 0x24012008, 0x42a56278, 0xf8c7d801, 0x482f8028, 0xf7ff4448,
    0x2800fd0f, 0x2c04d1b9, 0x2c02d005, 0xf897d006, 0x78310050, 0x6d38e006, 0xe0036831, 0x0050f8b7,
    0xb2808831, 0xd0014288, 0xe7a62001, 0x44261b2d, 0xd1cf2d00, 0xe7a02000, 0x6804b510, 0x439c4091,
    0x6004430c, 0xb570e6e2, 0x481b4605, 0x4448460c, 0xfdf1f7ff, 0x23004a18, 0x444a2001, 0x61506013,
    0x5046f882, 0x300ae9c2, 0x20086310, 0x61136413, 0x46106250, 0x4316e9c2, 0x4070e8bd, 0xb508e4d0,
    0x46692005, 0xfdfbf7ff, 0xd1032800, 0x1000f89d, 0xd1f507c9, 0x4808bd08, 0x4448b510, 0xfdcbf7ff,
    0x21014805, 0x61414448, 0x60012100, 0xf8802106, 0xe8bd1046, 0xe4b34010, 0x00000004, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// Start address of flash
static const uint32_t flash_start = 0x18000000;
// Size of flash
static const uint32_t flash_size = 0x00800000;

/**
* List of start and size for each size of flash sector - even indexes are start, odd are size
* The size will apply to all sectors between the listed address and the next address
* in the list.
* The last pair in the list will have sectors starting at that address and ending
* at address flash_start + flash_size.
*/
static const uint32_t sectors_info[] = {
    0x18000000, 0x00001000,
};

static const program_target_t flash = {
    0x200202c1, // Init
    0x200203cf, // UnInit
    0x20020449, // EraseChip
    0x2002047f, // EraseSector
    0x200204c1, // ProgramPage
    0x2002057f, // Verify

    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x20020001,
        0x200206bc,
        0x20020900
    },

    0x20020000 + 0x00004000,  // mem buffer location
    0x20020000,               // location to write prog_blob in target RAM
    sizeof(rza1xx_flash_prog_blob),   // prog_blob size
    rza1xx_flash_prog_blob,           // address of prog_blob
    0x00000100       // ram_to_flash_bytes_to_be_written
};
