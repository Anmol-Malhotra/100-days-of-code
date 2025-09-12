//Write a program to find the HCF (GCD) of two numbers.




#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first positive integer: ");
    scanf("%d", &a);
    printf("Enter second positive integer: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("HCF (GCD) = %d\n", a);

    return 0;
}