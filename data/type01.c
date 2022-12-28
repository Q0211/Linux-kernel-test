#include <stdio.h>
#include <stdlib.h>

typedef char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long s64_;
typedef unsigned long u64_;
typedef long long s64;
typedef unsigned long long u64;

int main(void)
{
	printf("s8 = %zu bytes\n", sizeof(s8));
	printf("u8 = %zu bytes\n", sizeof(u8));
	printf("s16 = %zu bytes\n", sizeof(s16));
	printf("u16 = %zu bytes\n", sizeof(u16));
	printf("s32 = %zu bytes\n", sizeof(s32));
	printf("u32 = %lu bytes\n", sizeof(u32));

	printf("s64_ = %zu bytes\n", sizeof(s64_));
	printf("u64_ = %zu bytes\n", sizeof(u64_));
	printf("s64 = %zu bytes\n", sizeof(s64));
	printf("u64 = %zu bytes\n", sizeof(u64));

	return 0;
}