//Write a program to check if a number is a perfect number.



#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a number greater than zero.\n");
        return 0;
    }
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a perfect number", num);
    }
    return 0;
}