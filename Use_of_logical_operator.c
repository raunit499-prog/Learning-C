#include <stdio.h>

int main()
{
  int a = 12, b = 5;

  printf("(a > b) && (a > 0) = %d\n", (a > b) && (a > 0));
  printf("(a < b) || (a > 0) = %d\n", (a < b) || (a > 0));
  printf("!(a > b) = %d\n\n", !(a > b));
}
