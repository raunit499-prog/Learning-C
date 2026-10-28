#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  float r;

  printf("Enter the value of radius of circle: ");
  scanf("%f", &r);
  printf("The area of the circle of radius %f is %0.2f", r, 3.14 * r * r);
  return 0;
}
