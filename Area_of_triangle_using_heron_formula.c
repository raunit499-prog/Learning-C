#include <math.h>
#include <stdio.h>

int main()
{
  float a, b, c, s, area;

  printf("Enter side 1: ");
  scanf("%f", &a);
  printf("Enter side 2: ");
  scanf("%f", &b);
  printf("Enter side 3: ");
  scanf("%f", &c);

  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("Area of the triangle = %.2f\n", area);
  return 0;
}
