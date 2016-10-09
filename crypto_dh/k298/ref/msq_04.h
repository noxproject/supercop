/* tables for multisquaring, exponent: 2^4 */

static uint64_3 tbl_sqr04[48][16] = {
{
        {0x0, 0x0, 0x0},
        {0x1, 0x0, 0x0},
        {0x10000, 0x0, 0x0},
        {0x10001, 0x0, 0x0},
        {0x100000000, 0x0, 0x0},
        {0x100000001, 0x0, 0x0},
        {0x100010000, 0x0, 0x0},
        {0x100010001, 0x0, 0x0},
        {0x1000000000000, 0x0, 0x0},
        {0x1000000000001, 0x0, 0x0},
        {0x1000000010000, 0x0, 0x0},
        {0x1000000010001, 0x0, 0x0},
        {0x1000100000000, 0x0, 0x0},
        {0x1000100000001, 0x0, 0x0},
        {0x1000100010000, 0x0, 0x0},
        {0x1000100010001, 0x0, 0x0},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x1, 0x0},
        {0x0, 0x10000, 0x0},
        {0x0, 0x10001, 0x0},
        {0x0, 0x100000000, 0x0},
        {0x0, 0x100000001, 0x0},
        {0x0, 0x100010000, 0x0},
        {0x0, 0x100010001, 0x0},
        {0x0, 0x1000000000000, 0x0},
        {0x0, 0x1000000000001, 0x0},
        {0x0, 0x1000000010000, 0x0},
        {0x0, 0x1000000010001, 0x0},
        {0x0, 0x1000100000000, 0x0},
        {0x0, 0x1000100000001, 0x0},
        {0x0, 0x1000100010000, 0x0},
        {0x0, 0x1000100010001, 0x0},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x0, 0x1},
        {0x0, 0x0, 0x10000},
        {0x0, 0x0, 0x10001},
        {0x0, 0x0, 0x100000000},
        {0x0, 0x0, 0x100000001},
        {0x0, 0x0, 0x100010000},
        {0x0, 0x0, 0x100010001},
        {0x0, 0x0, 0x1000000000000},
        {0x0, 0x0, 0x1000000000001},
        {0x0, 0x0, 0x1000000010000},
        {0x0, 0x0, 0x1000000010001},
        {0x0, 0x0, 0x1000100000000},
        {0x0, 0x0, 0x1000100000001},
        {0x0, 0x0, 0x1000100010000},
        {0x0, 0x0, 0x1000100010001},
},
{
        {0x0, 0x0, 0x0},
        {0x80001, 0x0, 0x0},
        {0x800010000, 0x0, 0x0},
        {0x800090001, 0x0, 0x0},
        {0x8000100000000, 0x0, 0x0},
        {0x8000100080001, 0x0, 0x0},
        {0x8000900010000, 0x0, 0x0},
        {0x8000900090001, 0x0, 0x0},
        {0x1000000000000, 0x8, 0x0},
        {0x1000000080001, 0x8, 0x0},
        {0x1000800010000, 0x8, 0x0},
        {0x1000800090001, 0x8, 0x0},
        {0x9000100000000, 0x8, 0x0},
        {0x9000100080001, 0x8, 0x0},
        {0x9000900010000, 0x8, 0x0},
        {0x9000900090001, 0x8, 0x0},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x80001, 0x0},
        {0x0, 0x800010000, 0x0},
        {0x0, 0x800090001, 0x0},
        {0x0, 0x8000100000000, 0x0},
        {0x0, 0x8000100080001, 0x0},
        {0x0, 0x8000900010000, 0x0},
        {0x0, 0x8000900090001, 0x0},
        {0x0, 0x1000000000000, 0x8},
        {0x0, 0x1000000080001, 0x8},
        {0x0, 0x1000800010000, 0x8},
        {0x0, 0x1000800090001, 0x8},
        {0x0, 0x9000100000000, 0x8},
        {0x0, 0x9000100080001, 0x8},
        {0x0, 0x9000900010000, 0x8},
        {0x0, 0x9000900090001, 0x8},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x0, 0x80001},
        {0x0, 0x0, 0x800010000},
        {0x0, 0x0, 0x800090001},
        {0x0, 0x0, 0x8000100000000},
        {0x0, 0x0, 0x8000100080001},
        {0x0, 0x0, 0x8000900010000},
        {0x0, 0x0, 0x8000900090001},
        {0x400008, 0x0, 0x1000000000000},
        {0x400008, 0x0, 0x1000000080001},
        {0x400008, 0x0, 0x1000800010000},
        {0x400008, 0x0, 0x1000800090001},
        {0x400008, 0x0, 0x9000100000000},
        {0x400008, 0x0, 0x9000100080001},
        {0x400008, 0x0, 0x9000900010000},
        {0x400008, 0x0, 0x9000900090001},
},
{
        {0x0, 0x0, 0x0},
        {0x4000000001, 0x0, 0x0},
        {0x40000000010000, 0x0, 0x0},
        {0x40004000010001, 0x0, 0x0},
        {0x100000000, 0x40, 0x0},
        {0x4100000001, 0x40, 0x0},
        {0x40000100010000, 0x40, 0x0},
        {0x40004100010001, 0x40, 0x0},
        {0x1000000000000, 0x400000, 0x0},
        {0x1004000000001, 0x400000, 0x0},
        {0x41000000010000, 0x400000, 0x0},
        {0x41004000010001, 0x400000, 0x0},
        {0x1000100000000, 0x400040, 0x0},
        {0x1004100000001, 0x400040, 0x0},
        {0x41000100010000, 0x400040, 0x0},
        {0x41004100010001, 0x400040, 0x0},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x4000000001, 0x0},
        {0x0, 0x40000000010000, 0x0},
        {0x0, 0x40004000010001, 0x0},
        {0x0, 0x100000000, 0x40},
        {0x0, 0x4100000001, 0x40},
        {0x0, 0x40000100010000, 0x40},
        {0x0, 0x40004100010001, 0x40},
        {0x0, 0x1000000000000, 0x400000},
        {0x0, 0x1004000000001, 0x400000},
        {0x0, 0x41000000010000, 0x400000},
        {0x0, 0x41004000010001, 0x400000},
        {0x0, 0x1000100000000, 0x400040},
        {0x0, 0x1004100000001, 0x400040},
        {0x0, 0x41000100010000, 0x400040},
        {0x0, 0x41004100010001, 0x400040},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x0, 0x4000000001},
        {0x0, 0x0, 0x40000000010000},
        {0x0, 0x0, 0x40004000010001},
        {0x2000040, 0x0, 0x100000000},
        {0x2000040, 0x0, 0x4100000001},
        {0x2000040, 0x0, 0x40000100010000},
        {0x2000040, 0x0, 0x40004100010001},
        {0x20000400000, 0x0, 0x1000000000000},
        {0x20000400000, 0x0, 0x1004000000001},
        {0x20000400000, 0x0, 0x41000000010000},
        {0x20000400000, 0x0, 0x41004000010001},
        {0x20002400040, 0x0, 0x1000100000000},
        {0x20002400040, 0x0, 0x1004100000001},
        {0x20002400040, 0x0, 0x41000100010000},
        {0x20002400040, 0x0, 0x41004100010001},
},
{
        {0x0, 0x0, 0x0},
        {0x200004000080001, 0x0, 0x0},
        {0x40000800010000, 0x200, 0x0},
        {0x240004800090001, 0x200, 0x0},
        {0x8000100000000, 0x2000040, 0x0},
        {0x208004100080001, 0x2000040, 0x0},
        {0x48000900010000, 0x2000240, 0x0},
        {0x248004900090001, 0x2000240, 0x0},
        {0x1000000000000, 0x20000400008, 0x0},
        {0x201004000080001, 0x20000400008, 0x0},
        {0x41000800010000, 0x20000400208, 0x0},
        {0x241004800090001, 0x20000400208, 0x0},
        {0x9000100000000, 0x20002400048, 0x0},
        {0x209004100080001, 0x20002400048, 0x0},
        {0x49000900010000, 0x20002400248, 0x0},
        {0x249004900090001, 0x20002400248, 0x0},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x200004000080001, 0x0},
        {0x0, 0x40000800010000, 0x200},
        {0x0, 0x240004800090001, 0x200},
        {0x0, 0x8000100000000, 0x2000040},
        {0x0, 0x208004100080001, 0x2000040},
        {0x0, 0x48000900010000, 0x2000240},
        {0x0, 0x248004900090001, 0x2000240},
        {0x0, 0x1000000000000, 0x20000400008},
        {0x0, 0x201004000080001, 0x20000400008},
        {0x0, 0x41000800010000, 0x20000400208},
        {0x0, 0x241004800090001, 0x20000400208},
        {0x0, 0x9000100000000, 0x20002400048},
        {0x0, 0x209004100080001, 0x20002400048},
        {0x0, 0x49000900010000, 0x20002400248},
        {0x0, 0x249004900090001, 0x20002400248},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x0, 0x200004000080001},
        {0x10000200, 0x0, 0x40000800010000},
        {0x10000200, 0x0, 0x240004800090001},
        {0x100000000040, 0x0, 0x8000100000000},
        {0x100000000040, 0x0, 0x208004100080001},
        {0x100010000240, 0x0, 0x48000900010000},
        {0x100010000240, 0x0, 0x248004900090001},
        {0x1000000000000008, 0x0, 0x1000000000000},
        {0x1000000000000008, 0x0, 0x201004000080001},
        {0x1000000010000208, 0x0, 0x41000800010000},
        {0x1000000010000208, 0x0, 0x241004800090001},
        {0x1000100000000048, 0x0, 0x9000100000000},
        {0x1000100000000048, 0x0, 0x209004100080001},
        {0x1000100010000248, 0x0, 0x49000900010000},
        {0x1000100010000248, 0x0, 0x249004900090001},
},
{
        {0x0, 0x0, 0x0},
        {0x1, 0x1000, 0x0},
        {0x10000, 0x10000000, 0x0},
        {0x10001, 0x10001000, 0x0},
        {0x100000000, 0x100000000000, 0x0},
        {0x100000001, 0x100000001000, 0x0},
        {0x100010000, 0x100010000000, 0x0},
        {0x100010001, 0x100010001000, 0x0},
        {0x1000000000000, 0x1000000000000000, 0x0},
        {0x1000000000001, 0x1000000000001000, 0x0},
        {0x1000000010000, 0x1000000010000000, 0x0},
        {0x1000000010001, 0x1000000010001000, 0x0},
        {0x1000100000000, 0x1000100000000000, 0x0},
        {0x1000100000001, 0x1000100000001000, 0x0},
        {0x1000100010000, 0x1000100010000000, 0x0},
        {0x1000100010001, 0x1000100010001000, 0x0},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x1, 0x1000},
        {0x0, 0x10000, 0x10000000},
        {0x0, 0x10001, 0x10001000},
        {0x0, 0x100000000, 0x100000000000},
        {0x0, 0x100000001, 0x100000001000},
        {0x0, 0x100010000, 0x100010000000},
        {0x0, 0x100010001, 0x100010001000},
        {0x0, 0x1000000000000, 0x1000000000000000},
        {0x0, 0x1000000000001, 0x1000000000001000},
        {0x0, 0x1000000010000, 0x1000000010000000},
        {0x0, 0x1000000010001, 0x1000000010001000},
        {0x0, 0x1000100000000, 0x1000100000000000},
        {0x0, 0x1000100000001, 0x1000100000001000},
        {0x0, 0x1000100010000, 0x1000100010000000},
        {0x0, 0x1000100010001, 0x1000100010001000},
},
{
        {0x0, 0x0, 0x0},
        {0x80001000, 0x0, 0x1},
        {0x800010000000, 0x0, 0x10000},
        {0x800090001000, 0x0, 0x10001},
        {0x8000100000000000, 0x0, 0x100000000},
        {0x8000100080001000, 0x0, 0x100000001},
        {0x8000900010000000, 0x0, 0x100010000},
        {0x8000900090001000, 0x0, 0x100010001},
        {0x1000000000000000, 0x8000, 0x1000000000000},
        {0x1000000080001000, 0x8000, 0x1000000000001},
        {0x1000800010000000, 0x8000, 0x1000000010000},
        {0x1000800090001000, 0x8000, 0x1000000010001},
        {0x9000100000000000, 0x8000, 0x1000100000000},
        {0x9000100080001000, 0x8000, 0x1000100000001},
        {0x9000900010000000, 0x8000, 0x1000100010000},
        {0x9000900090001000, 0x8000, 0x1000100010001},
},
{
        {0x0, 0x0, 0x0},
        {0x80001, 0x80001000, 0x0},
        {0x800010000, 0x800010000000, 0x0},
        {0x800090001, 0x800090001000, 0x0},
        {0x8000100000000, 0x8000100000000000, 0x0},
        {0x8000100080001, 0x8000100080001000, 0x0},
        {0x8000900010000, 0x8000900010000000, 0x0},
        {0x8000900090001, 0x8000900090001000, 0x0},
        {0x1000000000000, 0x1000000000000008, 0x8000},
        {0x1000000080001, 0x1000000080001008, 0x8000},
        {0x1000800010000, 0x1000800010000008, 0x8000},
        {0x1000800090001, 0x1000800090001008, 0x8000},
        {0x9000100000000, 0x9000100000000008, 0x8000},
        {0x9000100080001, 0x9000100080001008, 0x8000},
        {0x9000900010000, 0x9000900010000008, 0x8000},
        {0x9000900090001, 0x9000900090001008, 0x8000},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x80001, 0x80001000},
        {0x0, 0x800010000, 0x800010000000},
        {0x0, 0x800090001, 0x800090001000},
        {0x0, 0x8000100000000, 0x8000100000000000},
        {0x0, 0x8000100080001, 0x8000100080001000},
        {0x0, 0x8000900010000, 0x8000900010000000},
        {0x0, 0x8000900090001, 0x8000900090001000},
        {0x400008000, 0x1000000000000, 0x1000000000000008},
        {0x400008000, 0x1000000080001, 0x1000000080001008},
        {0x400008000, 0x1000800010000, 0x1000800010000008},
        {0x400008000, 0x1000800090001, 0x1000800090001008},
        {0x400008000, 0x9000100000000, 0x9000100000000008},
        {0x400008000, 0x9000100080001, 0x9000100080001008},
        {0x400008000, 0x9000900010000, 0x9000900010000008},
        {0x400008000, 0x9000900090001, 0x9000900090001008},
},
{
        {0x0, 0x0, 0x0},
        {0x4000000001000, 0x0, 0x80001},
        {0x10000000, 0x4, 0x800010000},
        {0x4000010001000, 0x4, 0x800090001},
        {0x100000000000, 0x40000, 0x8000100000000},
        {0x4100000001000, 0x40000, 0x8000100080001},
        {0x100010000000, 0x40004, 0x8000900010000},
        {0x4100010001000, 0x40004, 0x8000900090001},
        {0x1000000000400008, 0x400000000, 0x1000000000000},
        {0x1004000000401008, 0x400000000, 0x1000000080001},
        {0x1000000010400008, 0x400000004, 0x1000800010000},
        {0x1004000010401008, 0x400000004, 0x1000800090001},
        {0x1000100000400008, 0x400040000, 0x9000100000000},
        {0x1004100000401008, 0x400040000, 0x9000100080001},
        {0x1000100010400008, 0x400040004, 0x9000900010000},
        {0x1004100010401008, 0x400040004, 0x9000900090001},
},
{
        {0x0, 0x0, 0x0},
        {0x4000000001, 0x4000000001000, 0x0},
        {0x40000000010000, 0x10000000, 0x4},
        {0x40004000010001, 0x4000010001000, 0x4},
        {0x100000000, 0x100000000040, 0x40000},
        {0x4100000001, 0x4100000001040, 0x40000},
        {0x40000100010000, 0x100010000040, 0x40004},
        {0x40004100010001, 0x4100010001040, 0x40004},
        {0x1000000000000, 0x1000000000400000, 0x400000000},
        {0x1004000000001, 0x1004000000401000, 0x400000000},
        {0x41000000010000, 0x1000000010400000, 0x400000004},
        {0x41004000010001, 0x1004000010401000, 0x400000004},
        {0x1000100000000, 0x1000100000400040, 0x400040000},
        {0x1004100000001, 0x1004100000401040, 0x400040000},
        {0x41000100010000, 0x1000100010400040, 0x400040004},
        {0x41004100010001, 0x1004100010401040, 0x400040004},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x4000000001, 0x4000000001000},
        {0x200004, 0x40000000010000, 0x10000000},
        {0x200004, 0x40004000010001, 0x4000010001000},
        {0x2000040000, 0x100000000, 0x100000000040},
        {0x2000040000, 0x4100000001, 0x4100000001040},
        {0x2000240004, 0x40000100010000, 0x100010000040},
        {0x2000240004, 0x40004100010001, 0x4100010001040},
        {0x20000400000000, 0x1000000000000, 0x1000000000400000},
        {0x20000400000000, 0x1004000000001, 0x1004000000401000},
        {0x20000400200004, 0x41000000010000, 0x1000000010400000},
        {0x20000400200004, 0x41004000010001, 0x1004000010401000},
        {0x20002400040000, 0x1000100000000, 0x1000100000400040},
        {0x20002400040000, 0x1004100000001, 0x1004100000401040},
        {0x20002400240004, 0x41000100010000, 0x1000100010400040},
        {0x20002400240004, 0x41004100010001, 0x1004100010401040},
},
{
        {0x0, 0x0, 0x0},
        {0x4000080001000, 0x20, 0x4000000001},
        {0x800010000000, 0x200004, 0x40000000010000},
        {0x4800090001000, 0x200024, 0x40004000010001},
        {0x8000100002000040, 0x2000040000, 0x100000000},
        {0x8004100082001040, 0x2000040020, 0x4100000001},
        {0x8000900012000040, 0x2000240004, 0x40000100010000},
        {0x8004900092001040, 0x2000240024, 0x40004100010001},
        {0x1000020000400000, 0x20000400008000, 0x1000000000000},
        {0x1004020080401000, 0x20000400008020, 0x1004000000001},
        {0x1000820010400000, 0x20000400208004, 0x41000000010000},
        {0x1004820090401000, 0x20000400208024, 0x41004000010001},
        {0x9000120002400040, 0x20002400048000, 0x1000100000000},
        {0x9004120082401040, 0x20002400048020, 0x1004100000001},
        {0x9000920012400040, 0x20002400248004, 0x41000100010000},
        {0x9004920092401040, 0x20002400248024, 0x41004100010001},
},
{
        {0x0, 0x0, 0x0},
        {0x200004000080001, 0x4000080001000, 0x20},
        {0x40000800010000, 0x800010000200, 0x200004},
        {0x240004800090001, 0x4800090001200, 0x200024},
        {0x8000100000000, 0x8000100002000040, 0x2000040000},
        {0x208004100080001, 0x8004100082001040, 0x2000040020},
        {0x48000900010000, 0x8000900012000240, 0x2000240004},
        {0x248004900090001, 0x8004900092001240, 0x2000240024},
        {0x1000000000000, 0x1000020000400008, 0x20000400008000},
        {0x201004000080001, 0x1004020080401008, 0x20000400008020},
        {0x41000800010000, 0x1000820010400208, 0x20000400208004},
        {0x241004800090001, 0x1004820090401208, 0x20000400208024},
        {0x9000100000000, 0x9000120002400048, 0x20002400048000},
        {0x209004100080001, 0x9004120082401048, 0x20002400048020},
        {0x49000900010000, 0x9000920012400248, 0x20002400248004},
        {0x249004900090001, 0x9004920092401248, 0x20002400248024},
},
{
        {0x0, 0x0, 0x0},
        {0x1000020, 0x200004000080001, 0x4000080001000},
        {0x10000000004, 0x40000800010000, 0x800010000200},
        {0x10001000024, 0x240004800090001, 0x4800090001200},
        {0x100000000040000, 0x8000100000000, 0x8000100002000040},
        {0x100000001040020, 0x208004100080001, 0x8004100082001040},
        {0x100010000040004, 0x48000900010000, 0x8000900012000240},
        {0x100010001040024, 0x248004900090001, 0x8004900092001240},
        {0x8000, 0x1000000000100, 0x1000020000400008},
        {0x1008020, 0x201004000080101, 0x1004020080401008},
        {0x10000008004, 0x41000800010100, 0x1000820010400208},
        {0x10001008024, 0x241004800090101, 0x1004820090401208},
        {0x100000000048000, 0x9000100000100, 0x9000120002400048},
        {0x100000001048020, 0x209004100080101, 0x9004120082401048},
        {0x100010000048004, 0x49000900010100, 0x9000920012400248},
        {0x100010001048024, 0x249004900090101, 0x9004920092401248},
},
{
        {0x0, 0x0, 0x0},
        {0x1000, 0x1000000, 0x200004000080001},
        {0x200, 0x10000000000, 0x40000800010000},
        {0x1200, 0x10001000000, 0x240004800090001},
        {0x40, 0x100000000000000, 0x8000100000000},
        {0x1040, 0x100000001000000, 0x208004100080001},
        {0x240, 0x100010000000000, 0x48000900010000},
        {0x1240, 0x100010001000000, 0x248004900090001},
        {0x8, 0x0, 0x1000000000100},
        {0x1008, 0x1000000, 0x201004000080101},
        {0x208, 0x10000000000, 0x41000800010100},
        {0x1208, 0x10001000000, 0x241004800090101},
        {0x48, 0x100000000000000, 0x9000100000100},
        {0x1048, 0x100000001000000, 0x209004100080101},
        {0x248, 0x100010000000000, 0x49000900010100},
        {0x1248, 0x100010001000000, 0x249004900090101},
},
{
        {0x0, 0x0, 0x0},
        {0x1, 0x0, 0x1000000},
        {0x10000, 0x0, 0x10000000000},
        {0x10001, 0x0, 0x10001000000},
        {0x100000000, 0x0, 0x100000000000000},
        {0x100000001, 0x0, 0x100000001000000},
        {0x100010000, 0x0, 0x100010000000000},
        {0x100010001, 0x0, 0x100010001000000},
        {0x1000008000100, 0x0, 0x0},
        {0x1000008000101, 0x0, 0x1000000},
        {0x1000008010100, 0x0, 0x10000000000},
        {0x1000008010101, 0x0, 0x10001000000},
        {0x1000108000100, 0x0, 0x100000000000000},
        {0x1000108000101, 0x0, 0x100000001000000},
        {0x1000108010100, 0x0, 0x100010000000000},
        {0x1000108010101, 0x0, 0x100010001000000},
},
{
        {0x0, 0x0, 0x0},
        {0x80001000000, 0x1, 0x0},
        {0x800010000000000, 0x10000, 0x0},
        {0x800090001000000, 0x10001, 0x0},
        {0x100000000000000, 0x100000800, 0x0},
        {0x100080001000000, 0x100000801, 0x0},
        {0x900010000000000, 0x100010800, 0x0},
        {0x900090001000000, 0x100010801, 0x0},
        {0x0, 0x1000008000100, 0x0},
        {0x80001000000, 0x1000008000101, 0x0},
        {0x800010000000000, 0x1000008010100, 0x0},
        {0x800090001000000, 0x1000008010101, 0x0},
        {0x100000000000000, 0x1000108000900, 0x0},
        {0x100080001000000, 0x1000108000901, 0x0},
        {0x900010000000000, 0x1000108010900, 0x0},
        {0x900090001000000, 0x1000108010901, 0x0},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x80001000000, 0x1},
        {0x0, 0x800010000000000, 0x10000},
        {0x0, 0x800090001000000, 0x10001},
        {0x0, 0x100000000000000, 0x100000800},
        {0x0, 0x100080001000000, 0x100000801},
        {0x0, 0x900010000000000, 0x100010800},
        {0x0, 0x900090001000000, 0x100010801},
        {0x0, 0x0, 0x1000008000100},
        {0x0, 0x80001000000, 0x1000008000101},
        {0x0, 0x800010000000000, 0x1000008010100},
        {0x0, 0x800090001000000, 0x1000008010101},
        {0x0, 0x100000000000000, 0x1000108000900},
        {0x0, 0x100080001000000, 0x1000108000901},
        {0x0, 0x900010000000000, 0x1000108010900},
        {0x0, 0x900090001000000, 0x1000108010901},
},
{
        {0x0, 0x0, 0x0},
        {0x80001, 0x0, 0x80001000000},
        {0x800010000, 0x0, 0x800010000000000},
        {0x800090001, 0x0, 0x800090001000000},
        {0x8000140000800, 0x0, 0x100000000000000},
        {0x8000140080801, 0x0, 0x100080001000000},
        {0x8000940010800, 0x0, 0x900010000000000},
        {0x8000940090801, 0x0, 0x900090001000000},
        {0x1400000000100, 0x8, 0x0},
        {0x1400000080101, 0x8, 0x80001000000},
        {0x1400800010100, 0x8, 0x800010000000000},
        {0x1400800090101, 0x8, 0x800090001000000},
        {0x9400140000900, 0x8, 0x100000000000000},
        {0x9400140080901, 0x8, 0x100080001000000},
        {0x9400940010900, 0x8, 0x900010000000000},
        {0x9400940090901, 0x8, 0x900090001000000},
},
{
        {0x0, 0x0, 0x0},
        {0x4000000001000000, 0x80001, 0x0},
        {0x10000000000, 0x800014000, 0x0},
        {0x4000010001000000, 0x800094001, 0x0},
        {0x100000000000000, 0x8000140000000, 0x0},
        {0x4100000001000000, 0x8000140080001, 0x0},
        {0x100010000000000, 0x8000940014000, 0x0},
        {0x4100010001000000, 0x8000940094001, 0x0},
        {0x0, 0x1400000000100, 0x8},
        {0x4000000001000000, 0x1400000080101, 0x8},
        {0x10000000000, 0x1400800014100, 0x8},
        {0x4000010001000000, 0x1400800094101, 0x8},
        {0x100000000000000, 0x9400140000100, 0x8},
        {0x4100000001000000, 0x9400140080101, 0x8},
        {0x100010000000000, 0x9400940014100, 0x8},
        {0x4100010001000000, 0x9400940094101, 0x8},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x4000000001000000, 0x80001},
        {0x0, 0x10000000000, 0x800014000},
        {0x0, 0x4000010001000000, 0x800094001},
        {0x0, 0x100000000000000, 0x8000140000000},
        {0x0, 0x4100000001000000, 0x8000140080001},
        {0x0, 0x100010000000000, 0x8000940014000},
        {0x0, 0x4100010001000000, 0x8000940094001},
        {0x400008, 0x0, 0x1400000000100},
        {0x400008, 0x4000000001000000, 0x1400000080101},
        {0x400008, 0x10000000000, 0x1400800014100},
        {0x400008, 0x4000010001000000, 0x1400800094101},
        {0x400008, 0x100000000000000, 0x9400140000100},
        {0x400008, 0x4100000001000000, 0x9400140080101},
        {0x400008, 0x100010000000000, 0x9400940014100},
        {0x400008, 0x4100010001000000, 0x9400940094101},
},
{
        {0x0, 0x0, 0x0},
        {0x4000000001, 0x0, 0x4000000001000000},
        {0x40000200014000, 0x0, 0x10000000000},
        {0x40004200014001, 0x0, 0x4000010001000000},
        {0x2000140000000, 0x40, 0x100000000000000},
        {0x2004140000001, 0x40, 0x4100000001000000},
        {0x42000340014000, 0x40, 0x100010000000000},
        {0x42004340014001, 0x40, 0x4100010001000000},
        {0x1400008000100, 0x400002, 0x0},
        {0x1404008000101, 0x400002, 0x4000000001000000},
        {0x41400208014100, 0x400002, 0x10000000000},
        {0x41404208014101, 0x400002, 0x4000010001000000},
        {0x3400148000100, 0x400042, 0x100000000000000},
        {0x3404148000101, 0x400042, 0x4100000001000000},
        {0x43400348014100, 0x400042, 0x100010000000000},
        {0x43404348014101, 0x400042, 0x4100010001000000},
},
{
        {0x0, 0x0, 0x0},
        {0x4000080001000000, 0x4000020001, 0x0},
        {0x800010000000000, 0x40000200014000, 0x0},
        {0x4800090001000000, 0x40004200034001, 0x0},
        {0x100000000000000, 0x2000140000800, 0x40},
        {0x4100080001000000, 0x2004140020801, 0x40},
        {0x900010000000000, 0x42000340014800, 0x40},
        {0x4900090001000000, 0x42004340034801, 0x40},
        {0x0, 0x1400008000100, 0x400002},
        {0x4000080001000000, 0x1404008020101, 0x400002},
        {0x800010000000000, 0x41400208014100, 0x400002},
        {0x4800090001000000, 0x41404208034101, 0x400002},
        {0x100000000000000, 0x3400148000900, 0x400042},
        {0x4100080001000000, 0x3404148020901, 0x400042},
        {0x900010000000000, 0x43400348014900, 0x400042},
        {0x4900090001000000, 0x43404348034901, 0x400042},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x4000080001000000, 0x4000020001},
        {0x0, 0x800010000000000, 0x40000200014000},
        {0x0, 0x4800090001000000, 0x40004200034001},
        {0x2000040, 0x100000000000000, 0x2000140000800},
        {0x2000040, 0x4100080001000000, 0x2004140020801},
        {0x2000040, 0x900010000000000, 0x42000340014800},
        {0x2000040, 0x4900090001000000, 0x42004340034801},
        {0x20000500002, 0x0, 0x1400008000100},
        {0x20000500002, 0x4000080001000000, 0x1404008020101},
        {0x20000500002, 0x800010000000000, 0x41400208014100},
        {0x20000500002, 0x4800090001000000, 0x41404208034101},
        {0x20002500042, 0x100000000000000, 0x3400148000900},
        {0x20002500042, 0x4100080001000000, 0x3404148020901},
        {0x20002500042, 0x900010000000000, 0x43400348014900},
        {0x20002500042, 0x4900090001000000, 0x43404348034901},
},
{
        {0x0, 0x0, 0x0},
        {0x2000050000A0001, 0x0, 0x4000080001000000},
        {0x50000800014000, 0x200, 0x800010000000000},
        {0x2500058000B4001, 0x200, 0x4800090001000000},
        {0x8000100000800, 0x2000050, 0x100000000000000},
        {0x2080051000A0801, 0x2000050, 0x4100080001000000},
        {0x58000900014800, 0x2000250, 0x900010000000000},
        {0x2580059000B4801, 0x2000250, 0x4900090001000000},
        {0x1000000000100, 0x20000500008, 0x0},
        {0x2010050000A0101, 0x20000500008, 0x4000080001000000},
        {0x51000800014100, 0x20000500208, 0x800010000000000},
        {0x2510058000B4101, 0x20000500208, 0x4800090001000000},
        {0x9000100000900, 0x20002500058, 0x100000000000000},
        {0x2090051000A0901, 0x20002500058, 0x4100080001000000},
        {0x59000900014900, 0x20002500258, 0x900010000000000},
        {0x2590059000B4901, 0x20002500258, 0x4900090001000000},
},
{
        {0x0, 0x0, 0x0},
        {0x1000000, 0x200005000080001, 0x0},
        {0x10000000000, 0x50000800010000, 0x200},
        {0x10001000000, 0x250005800090001, 0x200},
        {0x100000000000000, 0x8000100000000, 0x2000050},
        {0x100000001000000, 0x208005100080001, 0x2000050},
        {0x100010000000000, 0x58000900010000, 0x2000250},
        {0x100010001000000, 0x258005900090001, 0x2000250},
        {0x0, 0x1000000000100, 0x20000500008},
        {0x1000000, 0x201005000080101, 0x20000500008},
        {0x10000000000, 0x51000800010100, 0x20000500208},
        {0x10001000000, 0x251005800090101, 0x20000500208},
        {0x100000000000000, 0x9000100000100, 0x20002500058},
        {0x100000001000000, 0x209005100080101, 0x20002500058},
        {0x100010000000000, 0x59000900010100, 0x20002500258},
        {0x100010001000000, 0x259005900090101, 0x20002500258},
},
{
        {0x0, 0x0, 0x0},
        {0x0, 0x1000000, 0x200005000080001},
        {0x10000200, 0x10000000000, 0x50000800010000},
        {0x10000200, 0x10001000000, 0x250005800090001},
        {0x100000800050, 0x100000000000000, 0x8000100000000},
        {0x100000800050, 0x100000001000000, 0x208005100080001},
        {0x100010800250, 0x100010000000000, 0x58000900010000},
        {0x100010800250, 0x100010001000000, 0x258005900090001},
        {0x1000008000100008, 0x0, 0x1000000000100},
        {0x1000008000100008, 0x1000000, 0x201005000080101},
        {0x1000008010100208, 0x10000000000, 0x51000800010100},
        {0x1000008010100208, 0x10001000000, 0x251005800090101},
        {0x1000108000900058, 0x100000000000000, 0x9000100000100},
        {0x1000108000900058, 0x100000001000000, 0x209005100080101},
        {0x1000108010900258, 0x100010000000000, 0x59000900010100},
        {0x1000108010900258, 0x100010001000000, 0x259005900090101},
},
{
        {0x0, 0x0, 0x0},
        {0x80001000000001, 0x1000, 0x1000000},
        {0x10000000010000, 0x10000080, 0x10000000000},
        {0x90001000010001, 0x10001080, 0x10001000000},
        {0x100000000, 0x100000800010, 0x100000000000000},
        {0x80001100000001, 0x100000801010, 0x100000001000000},
        {0x10000100010000, 0x100010800090, 0x100010000000000},
        {0x90001100010001, 0x100010801090, 0x100010001000000},
        {0x1000008000100, 0x1000008000100000, 0x0},
        {0x81001008000101, 0x1000008000101000, 0x1000000},
        {0x11000008010100, 0x1000008010100080, 0x10000000000},
        {0x91001008010101, 0x1000008010101080, 0x10001000000},
        {0x1000108000100, 0x1000108000900010, 0x100000000000000},
        {0x81001108000101, 0x1000108000901010, 0x100000001000000},
        {0x11000108010100, 0x1000108010900090, 0x100010000000000},
        {0x91001108010101, 0x1000108010901090, 0x100010001000000},
},
{
        {0x0, 0x0, 0x0},
        {0x80001000000, 0x80001000000001, 0x1000},
        {0x800010000000000, 0x10000000010000, 0x10000080},
        {0x800090001000000, 0x90001000010001, 0x10001080},
        {0x100000000000000, 0x100000800, 0x100000800010},
        {0x100080001000000, 0x80001100000801, 0x100000801010},
        {0x900010000000000, 0x10000100010800, 0x100010800090},
        {0x900090001000000, 0x90001100010801, 0x100010801090},
        {0x0, 0x1000008000100, 0x1000008000100000},
        {0x80001000000, 0x81001008000101, 0x1000008000101000},
        {0x800010000000000, 0x11000008010100, 0x1000008010100080},
        {0x800090001000000, 0x91001008010101, 0x1000008010101080},
        {0x100000000000000, 0x1000108000900, 0x1000108000900010},
        {0x100080001000000, 0x81001108000901, 0x1000108000901010},
        {0x900010000000000, 0x11000108010900, 0x1000108010900090},
        {0x900090001000000, 0x91001108010901, 0x1000108010901090},
},
{
        {0x0, 0x0, 0x0},
        {0x80001000, 0x80001000000, 0x80001000000001},
        {0x800014000080, 0x800010000000000, 0x10000000010000},
        {0x800094001080, 0x800090001000000, 0x90001000010001},
        {0x8000140000000010, 0x100000000000000, 0x100000800},
        {0x8000140080001010, 0x100080001000000, 0x80001100000801},
        {0x8000940014000090, 0x900010000000000, 0x10000100010800},
        {0x8000940094001090, 0x900090001000000, 0x90001100010801},
        {0x1400000000100000, 0x8000, 0x1000008000100},
        {0x1400000080101000, 0x80001008000, 0x81001008000101},
        {0x1400800014100080, 0x800010000008000, 0x11000008010100},
        {0x1400800094101080, 0x800090001008000, 0x91001008010101},
        {0x9400140000100010, 0x100000000008000, 0x1000108000900},
        {0x9400140080101010, 0x100080001008000, 0x81001108000901},
        {0x9400940014100090, 0x900010000008000, 0x11000108010900},
        {0x9400940094101090, 0x900090001008000, 0x91001108010901},
},
{
        {0x0, 0x0, 0x0},
        {0x1000080001, 0x80001400, 0x80001000000},
        {0x10000800010000, 0x800014000000, 0x800010000000000},
        {0x10001800090001, 0x800094001400, 0x800090001000000},
        {0x8000140000800, 0x8000140000000010, 0x100000000000000},
        {0x8001140080801, 0x8000140080001410, 0x100080001000000},
        {0x18000940010800, 0x8000940014000010, 0x900010000000000},
        {0x18001940090801, 0x8000940094001410, 0x900090001000000},
        {0x1400000000100, 0x1400000000100008, 0x8000},
        {0x1401000080101, 0x1400000080101408, 0x80001008000},
        {0x11400800010100, 0x1400800014100008, 0x800010000008000},
        {0x11401800090101, 0x1400800094101408, 0x800090001008000},
        {0x9400140000900, 0x9400140000100018, 0x100000000008000},
        {0x9401140080901, 0x9400140080101418, 0x100080001008000},
        {0x19400940010900, 0x9400940014100018, 0x900010000008000},
        {0x19401940090901, 0x9400940094101418, 0x900090001008000},
},
{
        {0x0, 0x0, 0x0},
        {0x4000000001000000, 0x1000080001, 0x80001400},
        {0x10000000000, 0x10000800014000, 0x800014000000},
        {0x4000010001000000, 0x10001800094001, 0x800094001400},
        {0x100000000000000, 0x8000140000000, 0x8000140000000010},
        {0x4100000001000000, 0x8001140080001, 0x8000140080001410},
        {0x100010000000000, 0x18000940014000, 0x8000940014000010},
        {0x4100010001000000, 0x18001940094001, 0x8000940094001410},
        {0x400008000, 0x1400000000100, 0x1400000000100008},
        {0x4000000401008000, 0x1401000080101, 0x1400000080101408},
        {0x10400008000, 0x11400800014100, 0x1400800014100008},
        {0x4000010401008000, 0x11401800094101, 0x1400800094101408},
        {0x100000400008000, 0x9400140000100, 0x9400140000100018},
        {0x4100000401008000, 0x9401140080101, 0x9400140080101418},
        {0x100010400008000, 0x19400940014100, 0x9400940014100018},
        {0x4100010401008000, 0x19401940094101, 0x9400940094101418},
},
{
        {0x0, 0x0, 0x0},
        {0x4000020001400, 0x4000000001000000, 0x1000080001},
        {0x200014000000, 0x10000000004, 0x10000800014000},
        {0x4200034001400, 0x4000010001000004, 0x10001800094001},
        {0x2000140000800010, 0x100000000040000, 0x8000140000000},
        {0x2004140020801410, 0x4100000001040000, 0x8001140080001},
        {0x2000340014800010, 0x100010000040004, 0x18000940014000},
        {0x2004340034801410, 0x4100010001040004, 0x18001940094001},
        {0x1400008000500008, 0x400002000, 0x1400000000100},
        {0x1404008020501408, 0x4000000401002000, 0x1401000080101},
        {0x1400208014500008, 0x10400002004, 0x11400800014100},
        {0x1404208034501408, 0x4000010401002004, 0x11401800094101},
        {0x3400148000D00018, 0x100000400042000, 0x9400140000100},
        {0x3404148020D01418, 0x4100000401042000, 0x9401140080101},
        {0x3400348014D00018, 0x100010400042004, 0x19400940014100},
        {0x3404348034D01418, 0x4100010401042004, 0x19401940094101},
},
{
        {0x0, 0x0, 0x0},
        {0x80005000000001, 0x4000020001400, 0x4000000001000000},
        {0x50000200014000, 0x200014000080, 0x10000000004},
        {0xD0005200014001, 0x4200034001480, 0x4000010001000004},
        {0x2000140000000, 0x2000140000800050, 0x100000000040000},
        {0x82005140000001, 0x2004140020801450, 0x4100000001040000},
        {0x52000340014000, 0x20003400148000D0, 0x100010000040004},
        {0xD2005340014001, 0x20043400348014D0, 0x4100010001040004},
        {0x1400008000100, 0x1400008000500002, 0x400002000},
        {0x81405008000101, 0x1404008020501402, 0x4000000401002000},
        {0x51400208014100, 0x1400208014500082, 0x10400002004},
        {0xD1405208014101, 0x1404208034501482, 0x4000010401002004},
        {0x3400148000100, 0x3400148000D00052, 0x100000400042000},
        {0x83405148000101, 0x3404148020D01452, 0x4100000401042000},
        {0x53400348014100, 0x3400348014D000D2, 0x100010400042004},
        {0xD3405348014101, 0x3404348034D014D2, 0x4100010401042004},
},
{
        {0x0, 0x0, 0x0},
        {0x4000080001000000, 0x80005000020001, 0x4000020001400},
        {0x800010000200004, 0x50000200014000, 0x200014000080},
        {0x4800090001200004, 0xD0005200034001, 0x4200034001480},
        {0x100002000040000, 0x2000140000800, 0x2000140000800050},
        {0x4100082001040000, 0x82005140020801, 0x2004140020801450},
        {0x900012000240004, 0x52000340014800, 0x20003400148000D0},
        {0x4900092001240004, 0xD2005340034801, 0x20043400348014D0},
        {0x20000500002000, 0x1400008000100, 0x1400008000500002},
        {0x4020080501002000, 0x81405008020101, 0x1404008020501402},
        {0x820010500202004, 0x51400208014100, 0x1400208014500082},
        {0x4820090501202004, 0xD1405208034101, 0x1404208034501482},
        {0x120002500042000, 0x3400148000900, 0x3400148000D00052},
        {0x4120082501042000, 0x83405148020901, 0x3404148020D01452},
        {0x920012500242004, 0x53400348014900, 0x3400348014D000D2},
        {0x4920092501242004, 0xD3405348034901, 0x3404348034D014D2},
},
{
        {0x0, 0x0, 0x0},
        {0x5000080001400, 0x4000080001000020, 0x80005000020001},
        {0x800010000080, 0x800010000200005, 0x50000200014000},
        {0x5800090001480, 0x4800090001200025, 0xD0005200034001},
        {0x8000100002000050, 0x100002000050000, 0x2000140000800},
        {0x8005100082001450, 0x4100082001050020, 0x82005140020801},
        {0x80009000120000D0, 0x900012000250005, 0x52000340014800},
        {0x80059000920014D0, 0x4900092001250025, 0xD2005340034801},
        {0x1000020000400002, 0x20000500008000, 0x1400008000100},
        {0x1005020080401402, 0x4020080501008020, 0x81405008020101},
        {0x1000820010400082, 0x820010500208005, 0x51400208014100},
        {0x1005820090401482, 0x4820090501208025, 0xD1405208034101},
        {0x9000120002400052, 0x120002500058000, 0x3400148000900},
        {0x9005120082401452, 0x4120082501058020, 0x83405148020901},
        {0x90009200124000D2, 0x920012500258005, 0x53400348014900},
        {0x90059200924014D2, 0x4920092501258025, 0xD3405348034901},
},
{
        {0x0, 0x0, 0x0},
        {0x2000040000A0001, 0x5000080001000, 0x4000080001000020},
        {0x40000800014000, 0x800010000200, 0x800010000200005},
        {0x2400048000B4001, 0x5800090001200, 0x4800090001200025},
        {0x8000100000800, 0x8000100002000040, 0x100002000050000},
        {0x2080041000A0801, 0x8005100082001040, 0x4100082001050020},
        {0x48000900014800, 0x8000900012000240, 0x900012000250005},
        {0x2480049000B4801, 0x8005900092001240, 0x4900092001250025},
        {0x1000000000100, 0x1000020000400008, 0x20000500008000},
        {0x2010040000A0101, 0x1005020080401008, 0x4020080501008020},
        {0x41000800014100, 0x1000820010400208, 0x820010500208005},
        {0x2410048000B4101, 0x1005820090401208, 0x4820090501208025},
        {0x9000100000900, 0x9000120002400048, 0x120002500058000},
        {0x2090041000A0901, 0x9005120082401048, 0x4120082501058020},
        {0x49000900014900, 0x9000920012400248, 0x920012500258005},
        {0x2490049000B4901, 0x9005920092401248, 0x4920092501258025},
},
{
        {0x0, 0x0, 0x0},
        {0x20, 0x200004000080001, 0x5000080001000},
        {0x80005, 0x40000800010000, 0x800010000200},
        {0x80025, 0x240004800090001, 0x5800090001200},
        {0x800050000, 0x8000100000000, 0x8000100002000040},
        {0x800050020, 0x208004100080001, 0x8005100082001040},
        {0x8000D0005, 0x48000900010000, 0x8000900012000240},
        {0x8000D0025, 0x248004900090001, 0x8005900092001240},
        {0x8000100008000, 0x1000000000000, 0x1000020000400008},
        {0x8000100008020, 0x201004000080001, 0x1005020080401008},
        {0x8000100088005, 0x41000800010000, 0x1000820010400208},
        {0x8000100088025, 0x241004800090001, 0x1005820090401208},
        {0x8000900058000, 0x9000100000000, 0x9000120002400048},
        {0x8000900058020, 0x209004100080001, 0x9005120082401048},
        {0x80009000D8005, 0x49000900010000, 0x9000920012400248},
        {0x80009000D8025, 0x249004900090001, 0x9005920092401248},
},
{
        {0x0, 0x0, 0x0},
        {0x1000000001000, 0x8, 0x200004000080001},
        {0x200, 0x80001, 0x40000800010000},
        {0x1000000001200, 0x80009, 0x240004800090001},
        {0x40, 0x800010000, 0x8000100000000},
        {0x1000000001040, 0x800010008, 0x208004100080001},
        {0x240, 0x800090001, 0x48000900010000},
        {0x1000000001240, 0x800090009, 0x248004900090001},
        {0x8, 0x8000100000000, 0x1000000000000},
        {0x1000000001008, 0x8000100000008, 0x201004000080001},
        {0x208, 0x8000100080001, 0x41000800010000},
        {0x1000000001208, 0x8000100080009, 0x241004800090001},
        {0x48, 0x8000900010000, 0x9000100000000},
        {0x1000000001048, 0x8000900010008, 0x209004100080001},
        {0x248, 0x8000900090001, 0x49000900010000},
        {0x1000000001248, 0x8000900090009, 0x249004900090001},
},
};

