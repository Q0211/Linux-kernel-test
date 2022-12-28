
#include <stdio.h>
#include <stdlib.h>

#include "type02.h"
#include "type03.h"

#include "bitsperlong.h"

int main(void)
{
#if defined(__BITS_PER_LONG)
	printf("Arm64 defined\n");
#else
	printf("Arm64 NOT defined\n");
#endif
	printf("__BITS_PER_LONG = %d bits\n", __BITS_PER_LONG);
	printf("BITS_PER_LONG = %d bits\n", BITS_PER_LONG);

	return 0;
}