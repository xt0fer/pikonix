#include "root/lib/u.h"
#include <stdio.h>
#include "pico/stdlib.h"

out(port, val)
{
    putchar(val);
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
