.globl _main

_main:
	xorl	%eax, %eax 
	pushl	%eax
	pushl	%eax
	movl	$23, %al
	int	$0x80 
