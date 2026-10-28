#include <stdio.h>
int main() {
  printf("Raunit Singh\t1000030627\n");
  float r, circumference;
  const float PI = 3.14159;

  printf("Enter radius: ");
  scanf("%f", &r);

  circumference = 2 * PI * r;

  printf("Circumference of the circle = %.2f\n", circumference);

  return 0;
}
