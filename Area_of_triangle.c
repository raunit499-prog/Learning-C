#include <stdio.h>

int main()
{
  float b, h;

  printf("Enter the value of base and height: ");
  scanf("%f%f", &b, &h);
  printf("The area of the circle of base %f and height %f is %0.2f", b, h,
         0.5 * b * h);
  return 0;
}
