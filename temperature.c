//Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>
int main()
{
    float c;
    float f;
    printf("Enter temperature in celsius: ");
    scanf("%f", &c);
    f = (9.0/5.0 * c) + 32.0;
    printf("Temperature in Fahrenheit is %.2f", f);
    return 0;
}