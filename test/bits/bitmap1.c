#include <stdio.h>
#include <stdlib.h>
#include "linux/types.h"
#include "linux/bits.h"
#include "linux/bitops.h"
#include "linux/kernel.h"

#include <inttypes.h>

int main(void)
{
	s32 i;
	u64 size;

	printf("char = %zu bits\n", BITS_PER_TYPE(char));
	printf("int = %zu bits\n", BITS_PER_TYPE(int));
	printf("long = %zu bits\n", BITS_PER_TYPE(long));

	for (i = 0; i < 321; i+= 32) {
		size = BITS_TO_LONGS(i);
		printf("%3" PRId32 ": size = %" PRIu64 " \n", i, size);
	}

	DECLARE_BITMAP(bitv, 300);
	printf("bitv size = %zu bits\n", sizeof(bitv) * BITS_PER_BYTE);

	return 0;
}