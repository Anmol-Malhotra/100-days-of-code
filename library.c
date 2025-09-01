//Write a program to calculate a library fine based on late days.


#include <stdio.h>
int main()
{
    int days, fine;
    printf("Days late: ");
    scanf("%d", &days);
    if (days <= 5)
    {
        fine = days*2;
        printf("Fine of Rs %d/-", fine);
    }
    else if (days > 5 && days <= 10 )
    {
        fine = days*4;
        printf("Fine of Rs %d/-", fine);
    }
    else if (days > 10 && days <= 15)
    {
        fine = days*6;
        printf("Fine of Rs %d/-", fine);
    }
    else if (days > 15 && days <= 20)
    {
        fine = days*8;
        printf("Fine of Rs %d/-", fine);
    }
    else if (days > 20 && days <= 25)
    {
        fine = days*10;
        printf("Fine of Rs %d/-", fine);
    }
    else if (days > 25 && days <= 30)
    {
        fine = days*12;
        printf("Fine of Rs %d/-", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }
    return 0;
}