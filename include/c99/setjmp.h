#ifndef	_SETJMP_H
#define	_SETJMP_H

#ifdef __cplusplus
extern "C" {
#endif

#if	defined(_PIC18) 
typedef	char jmp_buf[4];

#else
#error	setjmp.h: Processor type not supported, or not defined.
#endif

#ifdef __STACK
extern __nonreentrant int		setjmp(jmp_buf);
extern __nonreentrant void	longjmp(jmp_buf, int);
#else
extern int	setjmp(jmp_buf);
extern void	longjmp(jmp_buf, int);
#endif

#define setjmp setjmp

#ifdef __cplusplus
}
#endif

#endif	/* _SETJMP_H */
