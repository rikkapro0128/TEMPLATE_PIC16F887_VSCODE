#ifndef _ASSERT_H_
#define _ASSERT_H_
/*
 *	Assertion - use liberally for debugging. Defining NDEBUG
 *	turns assertions off.
 *	assert(exp) where exp is non-zero does nothing, while
 *	assert(exp) where exp evaluates to zero aborts the program
 *	with a message like
 *
 *	Assertion failed: prog.c line 123: "exp"
 *
 */

#include <bits/assert.h>

#pragma intrinsic(__builtin_software_breakpoint)
extern void __builtin_software_breakpoint(void);

#if defined(NDEBUG) || !defined(__DEBUG)
#define __conditional_software_breakpoint(exp)	((void)0)
#else
#define __conditional_software_breakpoint(exp)	\
	((exp) ? ((void)0) : __builtin_software_breakpoint())
#endif

#endif

