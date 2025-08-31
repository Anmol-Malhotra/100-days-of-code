//Write a program to input two numbers and display their sum, difference, product, and quotient.


#include <stdio.h>
int main()
{
    int a, b;
    int s, d, m, di;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    s = a + b;
    printf("%d + %d = %d\n", a, b, s);
    d = a - b;
    printf("%d - %d = %d\n", a, b, d);
    m = a * b;
    printf("%d * %d = %d\n", a, b, m);
    di = a / b;
    printf("%d / %d = %d\n", a, b, di);
    return 0;
}