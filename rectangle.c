//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>
int main()
{
    int l ,b;
    int p, a;
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    p = 2*(l + b);
    a = l*b;
    printf("Perimeter of rectangle is %d\n", p);
    printf("Area of rectangle is %d", a);
    return 0;
}