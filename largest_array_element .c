#include <stdio.h>

int main()
{
    printf("Raunit Singh\t1000030627\n");

    int n, i, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is : %d ", largest);
    return 0;
}
