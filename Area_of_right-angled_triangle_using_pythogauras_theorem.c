#include <math.h>
#include <stdio.h>

int main()
{
	printf("Raunit Singh\t1000030627\n");
	printf("Raunit Singh\t1000030627\n");
  float Unknown_side, hypotenuse, known_side, area;

  printf("Enter known_side: ");
  scanf("%f", &known_side);
  printf("Enter hypotenuse: ");
  scanf("%f", &hypotenuse);

  Unknown_side = sqrt((hypotenuse * hypotenuse) - (known_side * known_side));

  area = 0.5 * known_side * Unknown_side;

  printf("Unknown_side = %.2f\n", Unknown_side);
  printf("Area of the triangle = %.2f\n", area);
	return 0;
}
