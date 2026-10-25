#include <stdio.h>

int main()
{
  int a = 12, b = 5;

  printf("---- Arithmetic Operators ----\n");
  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  printf("a * b = %d\n", a * b);
  printf("a / b = %d\n", a / b);
  printf("a %% b = %d\n\n", a % b);

  printf("---- Relational Operators ----\n");
  printf("a > b = %d\n", a > b);
  printf("a < b = %d\n", a < b);
  printf("a == b = %d\n", a == b);
  printf("a != b = %d\n\n", a != b);

  printf("---- Logical Operators ----\n");
  printf("(a > b) && (a > 0) = %d\n", (a > b) && (a > 0));
  printf("(a < b) || (a > 0) = %d\n", (a < b) || (a > 0));
  printf("!(a > b) = %d\n\n", !(a > b));

  printf("---- Shorthand Assignment Operators ----\n");
  int x = 10;
  x += 5;
  printf("x += 5 -> x = %d\n", x);
  x -= 3;
  printf("x -= 3 -> x = %d\n", x);
  x *= 2;
  printf("x *= 2 -> x = %d\n", x);
  x /= 4;
  printf("x /= 4 -> x = %d\n", x);
  x %= 3;
  printf("x %%= 3 -> x = %d\n\n", x);

  printf("---- Unary Operators ----\n");
  int p = 5;
  printf("p++ = %d\n", p++);
  printf("After p++, p = %d\n", p);
  printf("++p = %d\n", ++p);
  printf("-p = %d\n\n", -p);

  printf("---- Conditional Operator ----\n");
  int max = (a > b) ? a : b;
  printf("Largest of a and b = %d\n\n", max);

  printf("---- Bitwise Operators ----\n");
  printf("a & b = %d\n", a & b);
  printf("a | b = %d\n", a | b);
  printf("a ^ b = %d\n", a ^ b);
  printf("~a = %d\n", ~a);
  printf("a << 1 = %d\n", a << 1);
  printf("a >> 1 = %d\n\n", a >> 1);

  printf("---- Comma Operator ----\n");
  int m, n;
  m = (n = 10, n + 5);
  printf("n = %d, m = %d\n", n, m);

  return 0;
}
