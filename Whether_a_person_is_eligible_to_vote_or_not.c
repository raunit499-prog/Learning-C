#include <stdio.h>
int main() {
  printf("Raunit Singh\t1000030627\n");
  printf("Raunit Singh\t1000030627\n");
  int a, b;

  printf("Enter the age of person1:");
  scanf("%d", &a);
  printf("Enter the age of person2:");
  scanf("%d", &b);
  if (a >= 18)
    printf("The person1 is eligible to vote\n");
  else
    printf("The person1 is not eligible to vote\n");
  if (a <= 18)
    printf("The person2 is eligible to vote\n");
  else
    printf("The person2 is not eligible to vote\n");
  return 0;
}
