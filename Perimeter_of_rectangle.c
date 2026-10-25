#include <stdio.h>

int main()
{
  float l, b, perimeter;

  printf("Enter length: ");
  scanf("%f", &l);
  printf("Enter breadth: ");
  scanf("%f", &b);

  perimeter = 2 * (l + b);

  printf("Perimeter of the rectangle = %.2f\n", perimeter);

  return 0;
}
