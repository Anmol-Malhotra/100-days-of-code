//Write a program to calculate an electricity bill based on units consumed.



#include <stdio.h>
int main()
{
    float units, bill;
    printf("1 unit = Rs 5/-\n");
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);
    bill = units*5;
    printf("Total electricity bill: %.2f", bill);
    return 0;
}