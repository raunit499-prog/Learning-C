#include <stdio.h>

int main()
{
  float l, b;

  printf("Enter the value of length and breadth of the rectangle: ");
  scanf("%0.2f %0.2f", &l, &b);
  printf("The area of the rectangle of length %0.2f and breadth %0.2f is %0.2f", l, b, l * b);

  return 0;
}
