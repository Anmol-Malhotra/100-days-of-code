// Write a program to find and display the sum of the first n natural numbers.



#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}