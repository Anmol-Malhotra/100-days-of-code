//Write a program to print the product of even numbers from 1 to n.



#include <stdio.h>
int main()
{
    int a, product = 1;
    printf("Enter how many odd numbers to multiply: ");
    scanf("%d", &a);
    for (int i = 2, count = 0; count < a; i +=2)
    {
        product *= i;
        count++;
    }
    printf("Product of first %d even natural numbers is: %d\n", a, product);
    return 0;
}