#include <stdio.h>

int main()
{
  int a, b, c;

  a = 10;
  b = 20;

  c = a + b;
  printf("Simple assignment: c = a + b = %d\n", c);

  c += a;
  printf("c += a  ->  c = %d\n", c);

  c -= b;
  printf("c -= b  ->  c = %d\n", c);

  return 0;
}
