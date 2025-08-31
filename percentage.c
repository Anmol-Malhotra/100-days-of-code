//Write a program to assign grades based on a percentage input.


#include <stdio.h>
int main()
{
    int a;
    printf("Enter your percentage: ");
    scanf("%d", &a);
    if (a >= 85)
    {
        printf("You have got A grade");
    }
    else if (a >= 70 && a < 85)
    {
        printf("You have got B grade");
    }
    else if (a >= 55 && a < 70)
    {
        printf("You have got C grade");
    }
    else if (a >= 35 && a < 55)
    {
        printf("You have got D grade");
    }
    else
    {
        printf("You have got F grade");
    }
    return 0;
}