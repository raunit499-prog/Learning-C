#include <stdio.h>

int main()
{
	printf("Raunit Singh\t1000030627\n");
	printf("Raunit Singh\t1000030627\n");
  float l, b, perimeter;

  printf("Enter length: ");
  scanf("%f", &l);
  printf("Enter breadth: ");
  scanf("%f", &b);

  perimeter = 2 * (l + b);

  printf("Perimeter of the rectangle = %.2f\n", perimeter);

  return 0;
}
