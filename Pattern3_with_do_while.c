#include <stdio.h>

int main()
{
    printf("Raunit Singh\t1000030627\n");
    int i, j, n;

    printf("Enter how many rows you want :");
    scanf("%d", &n);

    i = 1;
    do
    {
        j = 1;
        if (n - i != 0)
        {
            do
            {
                printf(" ");
                j++;
            } while (j <= n - i);
        }
        j = 1;
        do
        {
            printf("*");
            j++;
        } while (j <= 2 * i - 1);

        printf("\n");
        i++;
    } while (i <= n);
    return 0;
}
