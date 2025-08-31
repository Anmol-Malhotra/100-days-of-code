//Write a program to calculate the area and circumference of a circle given its radius.


#include <stdio.h>
int main()
{
    float r;
    float p, a;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    p = 2.0*3.14*r;
    a = 3.14*r*r;
    printf("Perimeter of circle is %.2f\n", p);
    printf("Area of circle is %.2f", a);
    return 0;
}