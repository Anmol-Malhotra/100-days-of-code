//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter length of first side: ");
    scanf("%d", &a);
    printf("Enter length of second side: ");
    scanf("%d", &b);
    printf("Enter length of third side: ");
    scanf("%d", &c);
    if (a == b && b == c)
    {
        printf("It a an Equilateral triangle");
    }
    else if (a == b || a == c && b != c || a != c)
    {
        printf("It a an Isosceles triangle");
    }
    else
    {
        printf("It a an Scalene triangle");
    }
    return 0;
}