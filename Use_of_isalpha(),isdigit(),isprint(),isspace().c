#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("Raunit Singh\t1000030627\n");
	printf("Raunit Singh\t1000030627\n");
  char ch1 = 'A';
  char ch2 = '5';

  printf("Character 1: '%c'\n", ch1);

  if (isalpha(ch1))
    printf("isalpha: Yes\n");
  else
    printf("isalpha: No\n");

  if (isdigit(ch1))
    printf("isdigit: Yes\n");
  else
    printf("isdigit: No\n");

  if (isprint(ch1))
    printf("isprint: Yes\n");
  else
    printf("isprint: No\n");

  if (isspace(ch1))
    printf("isspace: Yes\n");
  else
    printf("isspace: No\n");

  printf("\nCharacter 2: '%c'\n", ch2);

  if (isalpha(ch2))
    printf("isalpha: Yes\n");
  else
    printf("isalpha: No\n");

  if (isdigit(ch2))
    printf("isdigit: Yes\n");
  else
    printf("isdigit: No\n");

  if (isprint(ch2))
    printf("isprint: Yes\n");
  else
    printf("isprint: No\n");

  if (isspace(ch2))
    printf("isspace: Yes\n");
  else
    printf("isspace: No\n");

  return 0;
}
