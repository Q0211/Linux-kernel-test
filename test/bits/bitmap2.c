#include <stdio.h>
#include <stdlib.h>

#include "linux/types.h"
#include "linux/bits.h"
#include "linux/bitops.h" 
#include "linux/kernel.h"
#include "linux/bitmap.h"

void bits_print(unsigned long *v, u32 nbits)
{
	s32 i;
	u32 wc = BIT_WORD(nbits);
	u64 mask1, mask2 = BIT(BITS_PER_TYPE(long) - 1);

	for (i = wc; i >= 0; i--) {
		printf("v[%d] = ", i);
		mask1 = mask2;
		while (mask1) {
			printf("%d", (v[i] & mask1 ? 1 : 0));
			mask1 >>= 1;
		}
		printf("\n");
	}

	printf("\n");
}

int main(int argc, char *argv[])
{
	long nbits;
	char *test;

	if (argc != 2)
		exit(EXIT_FAILURE);

	nbits = strtol(argv[1], &test, 10);
	if (argv[1] == test)
		exit(EXIT_FAILURE);

	u32 v = BITS_TO_LONGS(nbits);
	u32 len = BITS_TO_LONGS(nbits) * sizeof(unsigned long);

	printf("nbits = %u, array = %u, bytes = %u, bits = %u\n\n",
		nbits, v, len, len * BITS_PER_BYTE);

	DECLARE_BITMAP(bitv, nbits);
	bits_print(bitv, nbits);

	bitmap_zero(bitv, nbits);
	bits_print(bitv, nbits);

	bitmap_fill(bitv, nbits);
	bits_print(bitv, nbits);

	return 0;
}