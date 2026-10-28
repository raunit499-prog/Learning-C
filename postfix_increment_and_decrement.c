#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  printf("Raunit Singh\t1000030627\n");
  int a = 5, b = 5, c = 5, d = 5;

  printf("Initial values: a=%d, b=%d, c=%d, d=%d\n\n", a, b, c, d);

  printf("Postfix Increment (a++):\n");
  printf("a++ = %d\n", a++);
  printf("Now a = %d\n\n", a);

  printf("Prefix Increment (++b):\n");
  printf("++b = %d\n", ++b);
  printf("Now b = %d\n\n", b);

  printf("Postfix Decrement (c--):\n");
  printf("c-- = %d\n", c--);
  printf("Now c = %d\n\n", c);

  printf("Prefix Decrement (--d):\n");
  printf("--d = %d\n", --d);
  printf("Now d = %d\n", d);

  return 0;
}
