#include <stdio.h>

#include <stdio.h>

int main() 
{
    printf("Raunit Singh\t1000030627\n");
    
    int n, i = 1;

    printf("Enter the number of natural numbers (n): ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please enter a positive integer greater than 0.\n");
    }

    printf("\n%-10s %-10s %-10s\n", "Number", "Square", "Cube");

    do 
    {
        printf("%-10d %-10d %-10d\n", i, i * i, i * i * i);
        i++;
    } while (i <= n);

    return 0;
}