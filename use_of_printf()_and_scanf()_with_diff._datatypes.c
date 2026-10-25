#include <stdio.h>

int main()
{
  int a;
  float b;
  char c;
  double d;

  printf("Enter an integer value: ");
  scanf("%d", &a);

  printf("Enter a float value: ");
  scanf("%f", &b);

  printf("Enter a character: ");
  scanf(" %c", &c);

  printf("Enter a double value: ");
  scanf("%lf", &d);

  printf("\nYou entered:\n");
  printf("Integer value: %d\n", a);
  printf("Float value: %.2f\n", b);
  printf("Character value: %c\n", c);
  printf("Double value: %.2lf\n", d);

  return 0;
}
