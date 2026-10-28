#include <stdio.h>

int main(void)
{
	printf("Raunit Singh\t1000030627\n");
	printf("Raunit Singh\t1000030627\n");
  float fahrenheit, celsius;

  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;

  printf("Temperature in Celsius = %.2f\n", celsius);

  return 0;
}
