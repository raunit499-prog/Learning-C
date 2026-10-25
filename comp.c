#include <math.h>
#include <stdio.h>

void main()
{
  double a, b, c, s, area;

  printf("Enter side 1: ");
  scanf("%lf", &a);
  printf("Enter side 2: ");
  scanf("%lf", &b);
  printf("Enter side 3: ");
  scanf("%lf", &c);

  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("Area of the triangle = %.2lf\n", area);
}
