#ifndef __hash_h
#define __hash_h

#include <stdio.h>
#include <stdlib.h>
#include "brg_endian.h"
#include <crypto_uint8.h>
#include <crypto_uint32.h>
#include <crypto_uint64.h>

typedef crypto_uint8 u8;
typedef crypto_uint32 u32;
typedef crypto_uint64 u64;

/* some sizes (number of bytes) */
#define ROWS 8
#define LENGTHFIELDLEN ROWS
#define COLS 16
#define SIZE (ROWS*COLS)
#define DIGESTSIZE 64

#define ROUNDS 14

#define ROTL64(a,n) ((((a)<<(n))|((a)>>(64-(n))))&((u64)0xffffffffffffffff))

#if (PLATFORM_BYTE_ORDER == IS_BIG_ENDIAN)
#define EXT_BYTE(var,n) ((u8)((u64)(var) >> (8*(7-(n)))))
#define U64BIG(a) (a)
#endif /* IS_BIG_ENDIAN */

#if (PLATFORM_BYTE_ORDER == IS_LITTLE_ENDIAN)
#define EXT_BYTE(var,n) ((u8)((u64)(var) >> (8*n)))
#define U64BIG(a)				\
  ((ROTL64(a, 8) & ((u64)0x000000ff000000ff)) |	\
   (ROTL64(a,24) & ((u64)0x0000ff000000ff00)) |	\
   (ROTL64(a,40) & ((u64)0x00ff000000ff0000)) |	\
   (ROTL64(a,56) & ((u64)0xff000000ff000000)))
#endif /* IS_LITTLE_ENDIAN */

typedef struct {
  u64 state[COLS];             /* actual state */
  u64 block_counter;           /* message block counter */
  unsigned char buffer[SIZE];  /* data buffer */
  int buf_ptr;                 /* data buffer pointer */
} context;

#include "crypto_hash.h"
#define Hash crypto_hash

#endif /* __hash_h */