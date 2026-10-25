#include <stdio.h>

int main()
{
  float l, b;

  printf("Enter the value of length and braedth of the rectangle: ");
  scanf("%f%f", &l, &b);
  printf("The area of the rectangle of breadth %f and breadth %f is %0.2f", l,
         b, l * b);
  return 0;
}
