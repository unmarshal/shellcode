.globl main

main:
  xorl	%ebx, %ebx
  leal	0x17(%ebx), %eax
  int 	$0x80

