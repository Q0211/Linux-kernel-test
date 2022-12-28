#include <stdio.h>
#include <stdlib.h>

#include "type02.h"
#include "type03.h"
#include "bits.h"

void bit64_print(u64 v)
{
	u64 mask = BIT_ULL(BITS_PER_LONG_LONG - 1);
	while (mask) {
		printf("%d", (v&mask ? 1 : 0));
		mask >>= 1;
	}

	printf("\n");
}

int main(void)
{
	u64 bits64;
	u32 i;

	for (i = 0; i < 256; i += 15) {
		bits64 = BIT_ULL(i);
		printf("BIT_ULL(%03d) = ", i);
		bit64_print(bits64);
		printf("BIT_ULL_WORD = %d\n", BIT_ULL_WORD(i));
	}

	bits64 = GENMASK_ULL(39, 21);
	printf("GENMASK_ULL() = 0x%016LX\n", bits64);
	printf("GENMASK_ULL() = ");
	bit64_print(bits64);
	
	return 0;
}