//Write a program to print the sum of the first n odd numbers.



#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter how many odd numbers to sum: ");
    scanf("%d", &a);
    for (int i = 1, count = 0; count < a; i +=2)
    {
        sum +=i;
        count++;
    }
    printf("Sum of first %d odd numbers is: %d\n", a, sum);
    return 0;
}