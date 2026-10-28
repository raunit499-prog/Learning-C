#include <stdio.h>

int main()
{
    printf("Raunit Singh\t1000030627\n");

    int m, n, sum = 0;

    printf("Enter the starting number (m): ");
    scanf("%d", &m);
    printf("Enter the ending number (n): ");
    scanf("%d", &n);

    if (m > n)
    {
        printf("Error!!! - m should be less than or equal to n.\n");
        return 1;
    }

    int i = m;

    while (i <= n)
    {
        sum += i;
        i++; 
    }

    printf("The sum of numbers from %d to %d is: %d\n", m, n, sum);

    return 0;
}