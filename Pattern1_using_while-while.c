#include <stdio.h>

int main()
{
  int i, n, j = 0;
  {

    printf("Enter the number of rows you want:");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
      j = 0;
      while (j < i)
      {
        printf("*");
        j++;
      }
      printf("\n");
      i++;
    }
  }
}
