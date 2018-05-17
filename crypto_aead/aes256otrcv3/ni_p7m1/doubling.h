/* Copyright (c) 2014, NEC Corporation. All rights reserved.
*
* LICENSE
*
* 1. NEC Corporation ("NEC") hereby grants users to use and reproduce
*AES-OTR program ("Software") for testing and evaluation purpose for
*CAESAR (Competition for Authenticated Encryption: Security, Applicability,
*and Robustness). The users must not use the Software for any other purpose
*or distribute it to any third party.
*
* 2. THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
*OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL NEC
*BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, OR CONSEQUENTIAL
*DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
*ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OF THE
*SOFTWARE.
*
* 3. In the event of an user's failure to comply with any term of this License
*or wrongful act, NEC may terminate such user's use of the Software. Upon such
*termination the user must cease all use of the Software and destroy all copies
*of the Software.
*
* 4. The users shall comply with all applicable laws and regulations, including
*export and import control laws, which govern the usage of the Software.
*/
#include "otr.h"

const ALIGN(16) unsigned long long TX[512] = {
0x0000000000000000, 0x0000000000000000,
0x0000000000000000, 0x0000000000000087,
0x0000000000000000, 0x000000000087010e,
0x0000000000000000, 0x0000000000870189,
0x0000000000000000, 0x00000087010e021c,
0x0000000000000000, 0x00000087010e029b,
0x0000000000000000, 0x0000008701890312,
0x0000000000000000, 0x0000008701890395,
0x0000000000000000, 0x0087010e021c0438,
0x0000000000000000, 0x0087010e021c04bf,
0x0000000000000000, 0x0087010e029b0536,
0x0000000000000000, 0x0087010e029b05b1,
0x0000000000000000, 0x0087018903120624,
0x0000000000000000, 0x00870189031206a3,
0x0000000000000000, 0x008701890395072a,
0x0000000000000000, 0x00870189039507ad,
0x0000000000000087, 0x010e021c04380870,
0x0000000000000087, 0x010e021c043808f7,
0x0000000000000087, 0x010e021c04bf097e,
0x0000000000000087, 0x010e021c04bf09f9,
0x0000000000000087, 0x010e029b05360a6c,
0x0000000000000087, 0x010e029b05360aeb,
0x0000000000000087, 0x010e029b05b10b62,
0x0000000000000087, 0x010e029b05b10be5,
0x0000000000000087, 0x0189031206240c48,
0x0000000000000087, 0x0189031206240ccf,
0x0000000000000087, 0x0189031206a30d46,
0x0000000000000087, 0x0189031206a30dc1,
0x0000000000000087, 0x01890395072a0e54,
0x0000000000000087, 0x01890395072a0ed3,
0x0000000000000087, 0x0189039507ad0f5a,
0x0000000000000087, 0x0189039507ad0fdd,
0x000000000087010e, 0x021c0438087010e0,
0x000000000087010e, 0x021c043808701067,
0x000000000087010e, 0x021c043808f711ee,
0x000000000087010e, 0x021c043808f71169,
0x000000000087010e, 0x021c04bf097e12fc,
0x000000000087010e, 0x021c04bf097e127b,
0x000000000087010e, 0x021c04bf09f913f2,
0x000000000087010e, 0x021c04bf09f91375,
0x000000000087010e, 0x029b05360a6c14d8,
0x000000000087010e, 0x029b05360a6c145f,
0x000000000087010e, 0x029b05360aeb15d6,
0x000000000087010e, 0x029b05360aeb1551,
0x000000000087010e, 0x029b05b10b6216c4,
0x000000000087010e, 0x029b05b10b621643,
0x000000000087010e, 0x029b05b10be517ca,
0x000000000087010e, 0x029b05b10be5174d,
0x0000000000870189, 0x031206240c481890,
0x0000000000870189, 0x031206240c481817,
0x0000000000870189, 0x031206240ccf199e,
0x0000000000870189, 0x031206240ccf1919,
0x0000000000870189, 0x031206a30d461a8c,
0x0000000000870189, 0x031206a30d461a0b,
0x0000000000870189, 0x031206a30dc11b82,
0x0000000000870189, 0x031206a30dc11b05,
0x0000000000870189, 0x0395072a0e541ca8,
0x0000000000870189, 0x0395072a0e541c2f,
0x0000000000870189, 0x0395072a0ed31da6,
0x0000000000870189, 0x0395072a0ed31d21,
0x0000000000870189, 0x039507ad0f5a1eb4,
0x0000000000870189, 0x039507ad0f5a1e33,
0x0000000000870189, 0x039507ad0fdd1fba,
0x0000000000870189, 0x039507ad0fdd1f3d,
0x00000087010e021c, 0x0438087010e021c0,
0x00000087010e021c, 0x0438087010e02147,
0x00000087010e021c, 0x04380870106720ce,
0x00000087010e021c, 0x0438087010672049,
0x00000087010e021c, 0x043808f711ee23dc,
0x00000087010e021c, 0x043808f711ee235b,
0x00000087010e021c, 0x043808f7116922d2,
0x00000087010e021c, 0x043808f711692255,
0x00000087010e021c, 0x04bf097e12fc25f8,
0x00000087010e021c, 0x04bf097e12fc257f,
0x00000087010e021c, 0x04bf097e127b24f6,
0x00000087010e021c, 0x04bf097e127b2471,
0x00000087010e021c, 0x04bf09f913f227e4,
0x00000087010e021c, 0x04bf09f913f22763,
0x00000087010e021c, 0x04bf09f9137526ea,
0x00000087010e021c, 0x04bf09f91375266d,
0x00000087010e029b, 0x05360a6c14d829b0,
0x00000087010e029b, 0x05360a6c14d82937,
0x00000087010e029b, 0x05360a6c145f28be,
0x00000087010e029b, 0x05360a6c145f2839,
0x00000087010e029b, 0x05360aeb15d62bac,
0x00000087010e029b, 0x05360aeb15d62b2b,
0x00000087010e029b, 0x05360aeb15512aa2,
0x00000087010e029b, 0x05360aeb15512a25,
0x00000087010e029b, 0x05b10b6216c42d88,
0x00000087010e029b, 0x05b10b6216c42d0f,
0x00000087010e029b, 0x05b10b6216432c86,
0x00000087010e029b, 0x05b10b6216432c01,
0x00000087010e029b, 0x05b10be517ca2f94,
0x00000087010e029b, 0x05b10be517ca2f13,
0x00000087010e029b, 0x05b10be5174d2e9a,
0x00000087010e029b, 0x05b10be5174d2e1d,
0x0000008701890312, 0x06240c4818903120,
0x0000008701890312, 0x06240c48189031a7,
0x0000008701890312, 0x06240c481817302e,
0x0000008701890312, 0x06240c48181730a9,
0x0000008701890312, 0x06240ccf199e333c,
0x0000008701890312, 0x06240ccf199e33bb,
0x0000008701890312, 0x06240ccf19193232,
0x0000008701890312, 0x06240ccf191932b5,
0x0000008701890312, 0x06a30d461a8c3518,
0x0000008701890312, 0x06a30d461a8c359f,
0x0000008701890312, 0x06a30d461a0b3416,
0x0000008701890312, 0x06a30d461a0b3491,
0x0000008701890312, 0x06a30dc11b823704,
0x0000008701890312, 0x06a30dc11b823783,
0x0000008701890312, 0x06a30dc11b05360a,
0x0000008701890312, 0x06a30dc11b05368d,
0x0000008701890395, 0x072a0e541ca83950,
0x0000008701890395, 0x072a0e541ca839d7,
0x0000008701890395, 0x072a0e541c2f385e,
0x0000008701890395, 0x072a0e541c2f38d9,
0x0000008701890395, 0x072a0ed31da63b4c,
0x0000008701890395, 0x072a0ed31da63bcb,
0x0000008701890395, 0x072a0ed31d213a42,
0x0000008701890395, 0x072a0ed31d213ac5,
0x0000008701890395, 0x07ad0f5a1eb43d68,
0x0000008701890395, 0x07ad0f5a1eb43def,
0x0000008701890395, 0x07ad0f5a1e333c66,
0x0000008701890395, 0x07ad0f5a1e333ce1,
0x0000008701890395, 0x07ad0fdd1fba3f74,
0x0000008701890395, 0x07ad0fdd1fba3ff3,
0x0000008701890395, 0x07ad0fdd1f3d3e7a,
0x0000008701890395, 0x07ad0fdd1f3d3efd,
0x0087010e021c0438, 0x087010e021c04380,
0x0087010e021c0438, 0x087010e021c04307,
0x0087010e021c0438, 0x087010e02147428e,
0x0087010e021c0438, 0x087010e021474209,
0x0087010e021c0438, 0x0870106720ce419c,
0x0087010e021c0438, 0x0870106720ce411b,
0x0087010e021c0438, 0x0870106720494092,
0x0087010e021c0438, 0x0870106720494015,
0x0087010e021c0438, 0x08f711ee23dc47b8,
0x0087010e021c0438, 0x08f711ee23dc473f,
0x0087010e021c0438, 0x08f711ee235b46b6,
0x0087010e021c0438, 0x08f711ee235b4631,
0x0087010e021c0438, 0x08f7116922d245a4,
0x0087010e021c0438, 0x08f7116922d24523,
0x0087010e021c0438, 0x08f71169225544aa,
0x0087010e021c0438, 0x08f711692255442d,
0x0087010e021c04bf, 0x097e12fc25f84bf0,
0x0087010e021c04bf, 0x097e12fc25f84b77,
0x0087010e021c04bf, 0x097e12fc257f4afe,
0x0087010e021c04bf, 0x097e12fc257f4a79,
0x0087010e021c04bf, 0x097e127b24f649ec,
0x0087010e021c04bf, 0x097e127b24f6496b,
0x0087010e021c04bf, 0x097e127b247148e2,
0x0087010e021c04bf, 0x097e127b24714865,
0x0087010e021c04bf, 0x09f913f227e44fc8,
0x0087010e021c04bf, 0x09f913f227e44f4f,
0x0087010e021c04bf, 0x09f913f227634ec6,
0x0087010e021c04bf, 0x09f913f227634e41,
0x0087010e021c04bf, 0x09f9137526ea4dd4,
0x0087010e021c04bf, 0x09f9137526ea4d53,
0x0087010e021c04bf, 0x09f91375266d4cda,
0x0087010e021c04bf, 0x09f91375266d4c5d,
0x0087010e029b0536, 0x0a6c14d829b05360,
0x0087010e029b0536, 0x0a6c14d829b053e7,
0x0087010e029b0536, 0x0a6c14d82937526e,
0x0087010e029b0536, 0x0a6c14d8293752e9,
0x0087010e029b0536, 0x0a6c145f28be517c,
0x0087010e029b0536, 0x0a6c145f28be51fb,
0x0087010e029b0536, 0x0a6c145f28395072,
0x0087010e029b0536, 0x0a6c145f283950f5,
0x0087010e029b0536, 0x0aeb15d62bac5758,
0x0087010e029b0536, 0x0aeb15d62bac57df,
0x0087010e029b0536, 0x0aeb15d62b2b5656,
0x0087010e029b0536, 0x0aeb15d62b2b56d1,
0x0087010e029b0536, 0x0aeb15512aa25544,
0x0087010e029b0536, 0x0aeb15512aa255c3,
0x0087010e029b0536, 0x0aeb15512a25544a,
0x0087010e029b0536, 0x0aeb15512a2554cd,
0x0087010e029b05b1, 0x0b6216c42d885b10,
0x0087010e029b05b1, 0x0b6216c42d885b97,
0x0087010e029b05b1, 0x0b6216c42d0f5a1e,
0x0087010e029b05b1, 0x0b6216c42d0f5a99,
0x0087010e029b05b1, 0x0b6216432c86590c,
0x0087010e029b05b1, 0x0b6216432c86598b,
0x0087010e029b05b1, 0x0b6216432c015802,
0x0087010e029b05b1, 0x0b6216432c015885,
0x0087010e029b05b1, 0x0be517ca2f945f28,
0x0087010e029b05b1, 0x0be517ca2f945faf,
0x0087010e029b05b1, 0x0be517ca2f135e26,
0x0087010e029b05b1, 0x0be517ca2f135ea1,
0x0087010e029b05b1, 0x0be5174d2e9a5d34,
0x0087010e029b05b1, 0x0be5174d2e9a5db3,
0x0087010e029b05b1, 0x0be5174d2e1d5c3a,
0x0087010e029b05b1, 0x0be5174d2e1d5cbd,
0x0087018903120624, 0x0c48189031206240,
0x0087018903120624, 0x0c481890312062c7,
0x0087018903120624, 0x0c48189031a7634e,
0x0087018903120624, 0x0c48189031a763c9,
0x0087018903120624, 0x0c481817302e605c,
0x0087018903120624, 0x0c481817302e60db,
0x0087018903120624, 0x0c48181730a96152,
0x0087018903120624, 0x0c48181730a961d5,
0x0087018903120624, 0x0ccf199e333c6678,
0x0087018903120624, 0x0ccf199e333c66ff,
0x0087018903120624, 0x0ccf199e33bb6776,
0x0087018903120624, 0x0ccf199e33bb67f1,
0x0087018903120624, 0x0ccf191932326464,
0x0087018903120624, 0x0ccf1919323264e3,
0x0087018903120624, 0x0ccf191932b5656a,
0x0087018903120624, 0x0ccf191932b565ed,
0x00870189031206a3, 0x0d461a8c35186a30,
0x00870189031206a3, 0x0d461a8c35186ab7,
0x00870189031206a3, 0x0d461a8c359f6b3e,
0x00870189031206a3, 0x0d461a8c359f6bb9,
0x00870189031206a3, 0x0d461a0b3416682c,
0x00870189031206a3, 0x0d461a0b341668ab,
0x00870189031206a3, 0x0d461a0b34916922,
0x00870189031206a3, 0x0d461a0b349169a5,
0x00870189031206a3, 0x0dc11b8237046e08,
0x00870189031206a3, 0x0dc11b8237046e8f,
0x00870189031206a3, 0x0dc11b8237836f06,
0x00870189031206a3, 0x0dc11b8237836f81,
0x00870189031206a3, 0x0dc11b05360a6c14,
0x00870189031206a3, 0x0dc11b05360a6c93,
0x00870189031206a3, 0x0dc11b05368d6d1a,
0x00870189031206a3, 0x0dc11b05368d6d9d,
0x008701890395072a, 0x0e541ca8395072a0,
0x008701890395072a, 0x0e541ca839507227,
0x008701890395072a, 0x0e541ca839d773ae,
0x008701890395072a, 0x0e541ca839d77329,
0x008701890395072a, 0x0e541c2f385e70bc,
0x008701890395072a, 0x0e541c2f385e703b,
0x008701890395072a, 0x0e541c2f38d971b2,
0x008701890395072a, 0x0e541c2f38d97135,
0x008701890395072a, 0x0ed31da63b4c7698,
0x008701890395072a, 0x0ed31da63b4c761f,
0x008701890395072a, 0x0ed31da63bcb7796,
0x008701890395072a, 0x0ed31da63bcb7711,
0x008701890395072a, 0x0ed31d213a427484,
0x008701890395072a, 0x0ed31d213a427403,
0x008701890395072a, 0x0ed31d213ac5758a,
0x008701890395072a, 0x0ed31d213ac5750d,
0x00870189039507ad, 0x0f5a1eb43d687ad0,
0x00870189039507ad, 0x0f5a1eb43d687a57,
0x00870189039507ad, 0x0f5a1eb43def7bde,
0x00870189039507ad, 0x0f5a1eb43def7b59,
0x00870189039507ad, 0x0f5a1e333c6678cc,
0x00870189039507ad, 0x0f5a1e333c66784b,
0x00870189039507ad, 0x0f5a1e333ce179c2,
0x00870189039507ad, 0x0f5a1e333ce17945,
0x00870189039507ad, 0x0fdd1fba3f747ee8,
0x00870189039507ad, 0x0fdd1fba3f747e6f,
0x00870189039507ad, 0x0fdd1fba3ff37fe6,
0x00870189039507ad, 0x0fdd1fba3ff37f61,
0x00870189039507ad, 0x0fdd1f3d3e7a7cf4,
0x00870189039507ad, 0x0fdd1f3d3e7a7c73,
0x00870189039507ad, 0x0fdd1f3d3efd7dfa,
0x00870189039507ad, 0x0fdd1f3d3efd7d7d
};

const ALIGN(16) unsigned long long TY[512] = {
0x0000000000000000, 0x0000000000000000,
0x0000000000000000, 0x0000000000000001,
0x0000000000000000, 0x0000000000010002,
0x0000000000000000, 0x0000000000010003,
0x0000000000000000, 0x0000000100020004,
0x0000000000000000, 0x0000000100020005,
0x0000000000000000, 0x0000000100030006,
0x0000000000000000, 0x0000000100030007,
0x0000000000000000, 0x0001000200040008,
0x0000000000000000, 0x0001000200040009,
0x0000000000000000, 0x000100020005000a,
0x0000000000000000, 0x000100020005000b,
0x0000000000000000, 0x000100030006000c,
0x0000000000000000, 0x000100030006000d,
0x0000000000000000, 0x000100030007000e,
0x0000000000000000, 0x000100030007000f,
0x0000000000000001, 0x0002000400080010,
0x0000000000000001, 0x0002000400080011,
0x0000000000000001, 0x0002000400090012,
0x0000000000000001, 0x0002000400090013,
0x0000000000000001, 0x00020005000a0014,
0x0000000000000001, 0x00020005000a0015,
0x0000000000000001, 0x00020005000b0016,
0x0000000000000001, 0x00020005000b0017,
0x0000000000000001, 0x00030006000c0018,
0x0000000000000001, 0x00030006000c0019,
0x0000000000000001, 0x00030006000d001a,
0x0000000000000001, 0x00030006000d001b,
0x0000000000000001, 0x00030007000e001c,
0x0000000000000001, 0x00030007000e001d,
0x0000000000000001, 0x00030007000f001e,
0x0000000000000001, 0x00030007000f001f,
0x0000000000010002, 0x0004000800100020,
0x0000000000010002, 0x0004000800100021,
0x0000000000010002, 0x0004000800110022,
0x0000000000010002, 0x0004000800110023,
0x0000000000010002, 0x0004000900120024,
0x0000000000010002, 0x0004000900120025,
0x0000000000010002, 0x0004000900130026,
0x0000000000010002, 0x0004000900130027,
0x0000000000010002, 0x0005000a00140028,
0x0000000000010002, 0x0005000a00140029,
0x0000000000010002, 0x0005000a0015002a,
0x0000000000010002, 0x0005000a0015002b,
0x0000000000010002, 0x0005000b0016002c,
0x0000000000010002, 0x0005000b0016002d,
0x0000000000010002, 0x0005000b0017002e,
0x0000000000010002, 0x0005000b0017002f,
0x0000000000010003, 0x0006000c00180030,
0x0000000000010003, 0x0006000c00180031,
0x0000000000010003, 0x0006000c00190032,
0x0000000000010003, 0x0006000c00190033,
0x0000000000010003, 0x0006000d001a0034,
0x0000000000010003, 0x0006000d001a0035,
0x0000000000010003, 0x0006000d001b0036,
0x0000000000010003, 0x0006000d001b0037,
0x0000000000010003, 0x0007000e001c0038,
0x0000000000010003, 0x0007000e001c0039,
0x0000000000010003, 0x0007000e001d003a,
0x0000000000010003, 0x0007000e001d003b,
0x0000000000010003, 0x0007000f001e003c,
0x0000000000010003, 0x0007000f001e003d,
0x0000000000010003, 0x0007000f001f003e,
0x0000000000010003, 0x0007000f001f003f,
0x0000000100020004, 0x0008001000200040,
0x0000000100020004, 0x0008001000200041,
0x0000000100020004, 0x0008001000210042,
0x0000000100020004, 0x0008001000210043,
0x0000000100020004, 0x0008001100220044,
0x0000000100020004, 0x0008001100220045,
0x0000000100020004, 0x0008001100230046,
0x0000000100020004, 0x0008001100230047,
0x0000000100020004, 0x0009001200240048,
0x0000000100020004, 0x0009001200240049,
0x0000000100020004, 0x000900120025004a,
0x0000000100020004, 0x000900120025004b,
0x0000000100020004, 0x000900130026004c,
0x0000000100020004, 0x000900130026004d,
0x0000000100020004, 0x000900130027004e,
0x0000000100020004, 0x000900130027004f,
0x0000000100020005, 0x000a001400280050,
0x0000000100020005, 0x000a001400280051,
0x0000000100020005, 0x000a001400290052,
0x0000000100020005, 0x000a001400290053,
0x0000000100020005, 0x000a0015002a0054,
0x0000000100020005, 0x000a0015002a0055,
0x0000000100020005, 0x000a0015002b0056,
0x0000000100020005, 0x000a0015002b0057,
0x0000000100020005, 0x000b0016002c0058,
0x0000000100020005, 0x000b0016002c0059,
0x0000000100020005, 0x000b0016002d005a,
0x0000000100020005, 0x000b0016002d005b,
0x0000000100020005, 0x000b0017002e005c,
0x0000000100020005, 0x000b0017002e005d,
0x0000000100020005, 0x000b0017002f005e,
0x0000000100020005, 0x000b0017002f005f,
0x0000000100030006, 0x000c001800300060,
0x0000000100030006, 0x000c001800300061,
0x0000000100030006, 0x000c001800310062,
0x0000000100030006, 0x000c001800310063,
0x0000000100030006, 0x000c001900320064,
0x0000000100030006, 0x000c001900320065,
0x0000000100030006, 0x000c001900330066,
0x0000000100030006, 0x000c001900330067,
0x0000000100030006, 0x000d001a00340068,
0x0000000100030006, 0x000d001a00340069,
0x0000000100030006, 0x000d001a0035006a,
0x0000000100030006, 0x000d001a0035006b,
0x0000000100030006, 0x000d001b0036006c,
0x0000000100030006, 0x000d001b0036006d,
0x0000000100030006, 0x000d001b0037006e,
0x0000000100030006, 0x000d001b0037006f,
0x0000000100030007, 0x000e001c00380070,
0x0000000100030007, 0x000e001c00380071,
0x0000000100030007, 0x000e001c00390072,
0x0000000100030007, 0x000e001c00390073,
0x0000000100030007, 0x000e001d003a0074,
0x0000000100030007, 0x000e001d003a0075,
0x0000000100030007, 0x000e001d003b0076,
0x0000000100030007, 0x000e001d003b0077,
0x0000000100030007, 0x000f001e003c0078,
0x0000000100030007, 0x000f001e003c0079,
0x0000000100030007, 0x000f001e003d007a,
0x0000000100030007, 0x000f001e003d007b,
0x0000000100030007, 0x000f001f003e007c,
0x0000000100030007, 0x000f001f003e007d,
0x0000000100030007, 0x000f001f003f007e,
0x0000000100030007, 0x000f001f003f007f,
0x0001000200040008, 0x0010002000400080,
0x0001000200040008, 0x0010002000400081,
0x0001000200040008, 0x0010002000410082,
0x0001000200040008, 0x0010002000410083,
0x0001000200040008, 0x0010002100420084,
0x0001000200040008, 0x0010002100420085,
0x0001000200040008, 0x0010002100430086,
0x0001000200040008, 0x0010002100430087,
0x0001000200040008, 0x0011002200440088,
0x0001000200040008, 0x0011002200440089,
0x0001000200040008, 0x001100220045008a,
0x0001000200040008, 0x001100220045008b,
0x0001000200040008, 0x001100230046008c,
0x0001000200040008, 0x001100230046008d,
0x0001000200040008, 0x001100230047008e,
0x0001000200040008, 0x001100230047008f,
0x0001000200040009, 0x0012002400480090,
0x0001000200040009, 0x0012002400480091,
0x0001000200040009, 0x0012002400490092,
0x0001000200040009, 0x0012002400490093,
0x0001000200040009, 0x00120025004a0094,
0x0001000200040009, 0x00120025004a0095,
0x0001000200040009, 0x00120025004b0096,
0x0001000200040009, 0x00120025004b0097,
0x0001000200040009, 0x00130026004c0098,
0x0001000200040009, 0x00130026004c0099,
0x0001000200040009, 0x00130026004d009a,
0x0001000200040009, 0x00130026004d009b,
0x0001000200040009, 0x00130027004e009c,
0x0001000200040009, 0x00130027004e009d,
0x0001000200040009, 0x00130027004f009e,
0x0001000200040009, 0x00130027004f009f,
0x000100020005000a, 0x00140028005000a0,
0x000100020005000a, 0x00140028005000a1,
0x000100020005000a, 0x00140028005100a2,
0x000100020005000a, 0x00140028005100a3,
0x000100020005000a, 0x00140029005200a4,
0x000100020005000a, 0x00140029005200a5,
0x000100020005000a, 0x00140029005300a6,
0x000100020005000a, 0x00140029005300a7,
0x000100020005000a, 0x0015002a005400a8,
0x000100020005000a, 0x0015002a005400a9,
0x000100020005000a, 0x0015002a005500aa,
0x000100020005000a, 0x0015002a005500ab,
0x000100020005000a, 0x0015002b005600ac,
0x000100020005000a, 0x0015002b005600ad,
0x000100020005000a, 0x0015002b005700ae,
0x000100020005000a, 0x0015002b005700af,
0x000100020005000b, 0x0016002c005800b0,
0x000100020005000b, 0x0016002c005800b1,
0x000100020005000b, 0x0016002c005900b2,
0x000100020005000b, 0x0016002c005900b3,
0x000100020005000b, 0x0016002d005a00b4,
0x000100020005000b, 0x0016002d005a00b5,
0x000100020005000b, 0x0016002d005b00b6,
0x000100020005000b, 0x0016002d005b00b7,
0x000100020005000b, 0x0017002e005c00b8,
0x000100020005000b, 0x0017002e005c00b9,
0x000100020005000b, 0x0017002e005d00ba,
0x000100020005000b, 0x0017002e005d00bb,
0x000100020005000b, 0x0017002f005e00bc,
0x000100020005000b, 0x0017002f005e00bd,
0x000100020005000b, 0x0017002f005f00be,
0x000100020005000b, 0x0017002f005f00bf,
0x000100030006000c, 0x00180030006000c0,
0x000100030006000c, 0x00180030006000c1,
0x000100030006000c, 0x00180030006100c2,
0x000100030006000c, 0x00180030006100c3,
0x000100030006000c, 0x00180031006200c4,
0x000100030006000c, 0x00180031006200c5,
0x000100030006000c, 0x00180031006300c6,
0x000100030006000c, 0x00180031006300c7,
0x000100030006000c, 0x00190032006400c8,
0x000100030006000c, 0x00190032006400c9,
0x000100030006000c, 0x00190032006500ca,
0x000100030006000c, 0x00190032006500cb,
0x000100030006000c, 0x00190033006600cc,
0x000100030006000c, 0x00190033006600cd,
0x000100030006000c, 0x00190033006700ce,
0x000100030006000c, 0x00190033006700cf,
0x000100030006000d, 0x001a0034006800d0,
0x000100030006000d, 0x001a0034006800d1,
0x000100030006000d, 0x001a0034006900d2,
0x000100030006000d, 0x001a0034006900d3,
0x000100030006000d, 0x001a0035006a00d4,
0x000100030006000d, 0x001a0035006a00d5,
0x000100030006000d, 0x001a0035006b00d6,
0x000100030006000d, 0x001a0035006b00d7,
0x000100030006000d, 0x001b0036006c00d8,
0x000100030006000d, 0x001b0036006c00d9,
0x000100030006000d, 0x001b0036006d00da,
0x000100030006000d, 0x001b0036006d00db,
0x000100030006000d, 0x001b0037006e00dc,
0x000100030006000d, 0x001b0037006e00dd,
0x000100030006000d, 0x001b0037006f00de,
0x000100030006000d, 0x001b0037006f00df,
0x000100030007000e, 0x001c0038007000e0,
0x000100030007000e, 0x001c0038007000e1,
0x000100030007000e, 0x001c0038007100e2,
0x000100030007000e, 0x001c0038007100e3,
0x000100030007000e, 0x001c0039007200e4,
0x000100030007000e, 0x001c0039007200e5,
0x000100030007000e, 0x001c0039007300e6,
0x000100030007000e, 0x001c0039007300e7,
0x000100030007000e, 0x001d003a007400e8,
0x000100030007000e, 0x001d003a007400e9,
0x000100030007000e, 0x001d003a007500ea,
0x000100030007000e, 0x001d003a007500eb,
0x000100030007000e, 0x001d003b007600ec,
0x000100030007000e, 0x001d003b007600ed,
0x000100030007000e, 0x001d003b007700ee,
0x000100030007000e, 0x001d003b007700ef,
0x000100030007000f, 0x001e003c007800f0,
0x000100030007000f, 0x001e003c007800f1,
0x000100030007000f, 0x001e003c007900f2,
0x000100030007000f, 0x001e003c007900f3,
0x000100030007000f, 0x001e003d007a00f4,
0x000100030007000f, 0x001e003d007a00f5,
0x000100030007000f, 0x001e003d007b00f6,
0x000100030007000f, 0x001e003d007b00f7,
0x000100030007000f, 0x001f003e007c00f8,
0x000100030007000f, 0x001f003e007c00f9,
0x000100030007000f, 0x001f003e007d00fa,
0x000100030007000f, 0x001f003e007d00fb,
0x000100030007000f, 0x001f003f007e00fc,
0x000100030007000f, 0x001f003f007e00fd,
0x000100030007000f, 0x001f003f007f00fe,
0x000100030007000f, 0x001f003f007f00ff
};
