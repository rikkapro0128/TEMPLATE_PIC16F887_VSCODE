#ifndef _XC8DEBUG_H_
#define _XC8DEBUG_H_

#include <stdlib.h>

#if defined(_PIC14E) || defined(_PIC14EX) || defined(_PIC18)
#define RESET()	asm("reset")
#else
#define RESET()	asm("ljmp $")
#endif

#pragma intrinsic(__builtin_software_breakpoint)
extern void __builtin_software_breakpoint(void);

#if defined(__DEBUG)
#define __debug_break()	__builtin_software_breakpoint()
#else
#define __debug_break()	((void)0)
#endif

#endif

