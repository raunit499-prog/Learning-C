#include <stdio.h>

int main()
{
	printf("Raunit Singh\t1000030627\n");
	printf("Raunit Singh\t1000030627\n");
  int a, i;
  float b, f;

  printf("\nEnter the float value to be converted into integer: ");
  scanf("%f", &b);

  printf("\nEnter the integer value to be converted into float: ");
  scanf("%d", &a);

  i = (int)b;
  printf("\nFloat %.2f converted to Integer = %d", b, i);

  f = (float)a;
  printf("\nInteger %d converted to Float = %.2f", a, f);

  return 0;
}
