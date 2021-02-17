#include "root/lib/u.h"
#include <stdio.h>
#include "pico/stdlib.h"

void out(int port, int val)
{
  //putchar(val);
  fputc(val, port);
}

int write(int f, char *s, int n)
{
  int x = n;
  while (n--)
    out(f, *s++);
  return x;
}  
  
int main()
{
  setup_default_uart();

  write(1, "Hello world.\n", 13);
  //asm(HALT);
  return 0;
}
