#include <stdio.h>

int main()
{
    printf("Raunit Singh\t1000030627\n");
    int i, j, n;

    printf("Enter how many rows you want :");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        j = 1;
        if (n - i != 0)
        {
            while (j <= n - i)
            {
                printf(" ");
                j++;
            }
        }
        j = 1;
        while (j <= 2 * i - 1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
