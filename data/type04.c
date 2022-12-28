#include <stdio.h>
#include <stdlib.h>

#include "type02.h"
#include "type03.h"

#define USHRT_MAX	((u16)(~0U))
#define SHRT_MAX	((s16)(USHRT_MAX>>1))
#define SHRT_MIN	((s16)(-SHRT_MAX - 1))
#define INT_MAX		((int)(~0U>>1))
#define INT_MIN		(-INT_MAX - 1)
#define UINT_MAX	(~0U)
#define LONG_MAX	((long)(~0UL>>1))
#define LONG_MIN	(-LONG_MAX - 1)
#define ULONG_MAX	(~0UL)
#define LLONG_MAX	((long long)(~0ULL>>1))
#define LLONG_MIN	(-LLONG_MAX - 1)
#define ULLONG_MAX	(~0ULL)
#define SIZE_MAX	(~(size_t)0)
#define PHYS_ADDR_MAX	(~(phys_addr_t)0)

#define U8_MAX		((u8)~0U)
#define S8_MAX		((s8)(U8_MAX>>1))
#define S8_MIN		((s8)(-S8_MAX - 1))
#define U16_MAX		((u16)~0U)
#define S16_MAX		((s16)(U16_MAX>>1))
#define S16_MIN		((s16)(-S16_MAX - 1))
#define U32_MAX		((u32)~0U)
#define S32_MAX		((s32)(U32_MAX>>1))
#define S32_MIN		((s32)(-S32_MAX - 1))
#define U64_MAX		((u64)~0ULL)
#define S64_MAX		((s64)(U64_MAX>>1))
#define S64_MIN		((s64)(-S64_MAX - 1))

#include <inttypes.h>

#define STACK_MAGIC	0xdeadbeef

int main(void)
{
	printf("U8_MAX = %" PRIu8 "\n", U8_MAX);
	printf("S8_MAX = %" PRId8 "\n", S8_MAX);
	printf("S8_MIN = %" PRId8 "\n", S8_MIN);

	printf("U16_MAX = %" PRIu16 "\n", U16_MAX);
	printf("S16_MAX = %" PRId16 "\n", S16_MAX);
	printf("S16_MIN = %" PRId16 "\n", S16_MIN);

	printf("U32_MAX = %" PRIu32 "\n", U32_MAX);
	printf("S32_MAX = %" PRId32 "\n", S32_MAX);
	printf("S32_MIN = %" PRId32 "\n", S32_MIN);

	printf("U64_MAX = %" PRIu64 "\n", U64_MAX);
	printf("S64_MAX = %" PRId64 "\n", S64_MAX);
	printf("S64_MIN = %" PRId64 "\n", S64_MIN);

	return 0;
}