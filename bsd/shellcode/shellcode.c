#include <stdio.h>
#include "shellcode.h"

int main(void)
{
  char buf[1024];

  void (*func)(void) = (void(*))(buf);

  memset(buf, 0, sizeof(buf));

  strcpy(buf, setuid);
  strcat(buf, execve);
  
  func();
}

