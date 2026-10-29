#include <stdio.h>

int main()
{
    printf("Raunit Singh\t1000030627\n");

    int n, i, sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
    printf("Average = %d\n", avg);

    return 0;
}
