#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  printf("Raunit Singh\t1000030627\n");
  char ch;

  printf("Enter an uppercase character: ");
  scanf("%c", &ch);

  ch = ch + 32; // Convert uppercase to lowercase

  printf("Lowercase character = %c\n", ch);

  return 0;
}
