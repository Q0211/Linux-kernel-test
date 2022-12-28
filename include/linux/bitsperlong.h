/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_GENERIC_BITS_PER_LONG
#define __ASM_GENERIC_BITS_PER_LONG

#include "config.h"

// // arch/x86/include/uapi/asm/bitsperlong.h
// #if defined(__x86_64__) && !defined(__ILP32__)
// # define __BITS_PER_LONG 64
// #else
// # define __BITS_PER_LONG 32
// #endif


// arch/arm64/include/uapi/asm/bitsperlong.h
# define __BITS_PER_LONG 64

// // arch/riscv/include/uapi/asm/bitsperlong.h
// # define __BITS_PER_LONG (__SIZEOF_POINTER__ * 8)

// // include/uapi/asm-generic/bitsperlong.h
// #ifndef __BITS_PER_LONG
// #define __BITS_PER_LONG 32
// #endif


#ifdef CONFIG_64BIT
#define BITS_PER_LONG 64
#else
#define BITS_PER_LONG 32
#endif /* CONFIG_64BIT */

/*
 * FIXME: The check currently breaks x86-64 build, so it's
 * temporarily disabled. Please fix x86_64 and reenable
 */
#if 0 && BITS_PER_LONG != __BITS_PER_LONG
#error Inconsistent word size. Check asm/bitsperlong.h
#endif

#ifndef BITS_PER_LONG_LONG
#define BITS_PER_LONG_LONG 64
#endif

#endif /* __ASM_GENERIC_BITS_PER_LONG */
