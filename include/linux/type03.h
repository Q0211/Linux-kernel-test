// include/linux/types.h
/* bsd */
typedef unsigned char		u_char;
typedef unsigned short		u_short;
typedef unsigned int		u_int;
typedef unsigned long		u_long;

/* sysv */
typedef unsigned char		unchar;
typedef unsigned short		ushort;
typedef unsigned int		uint;
typedef unsigned long		ulong;

#ifndef __BIT_TYPES_DEFINED__
#define __BIT_TYPES_DEFINED__

typedef u8			u_int8_t;
typedef s8			int8_t;
typedef u16			u_int16_t;
typedef s16			int16_t;
typedef u32			u_int32_t;
typedef s32			int32_t;

#endif /* !(__BIT_TYPES_DEFINED__) */

// #if defined(__GNUC__)
#if defined(_GNUC_)
typedef u64			uint64_t;
typedef u64			u_int64_t;
typedef s64			int64_t;
#endif

#ifdef CONFIG_ARCH_DMA_ADDR_T_64BIT
typedef u64 dma_addr_t;
#else
typedef u32 dma_addr_t;
#endif

// include/uapi/asm-generic/posix_types.h
typedef unsigned long	__kernel_ulong_t;
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_size_t size_t;