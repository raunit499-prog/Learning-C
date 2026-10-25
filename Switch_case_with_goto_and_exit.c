#include <stdio.h>
#include <stdlib.h>
void main()
{
  int n;
ayush:
  printf("\nEnter your choice between (1-8):");
  scanf("%d", &n);

  switch (n)
  {
  case 1:
    printf("Monday");
    break;

  case 2:
    printf("Tuesday");
    break;

  case 3:
    printf("Wednesday");
    break;

  case 4:
    printf("Thursday");
    break;

  case 5:
    printf("Friday");
    break;

  case 6:
    printf("Saturday");
    break;

  case 7:
    printf("Sunday");
    break;

  case 8:
    printf("\nExiting program completed");
    exit(0);

  default:
    printf("\nINVALID INPUT\nEnter a valid input");
  }
  goto ayush;
}