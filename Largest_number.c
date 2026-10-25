#include <stdio.h>

int main()
{
  int a, b, largest;

  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  largest = (a > b) ? a : b;

  printf("Largest number = %d\n", largest);

  return 0;
}
