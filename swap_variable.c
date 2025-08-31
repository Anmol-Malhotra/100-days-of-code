//Write a program to swap two numbers using a third variable.


#include <stdio.h>
int main()
{
    int a, b;
    int c;
    printf("Enter first number a: ");
    scanf("%d", &a);
    printf("Enter second number b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("a = %d and b = %d", a, b);
    return 0;
}