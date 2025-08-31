//Write a program to find profit or loss percentage given cost price and selling price.



#include <stdio.h>
int main()
{
    float cp, sp;
    float profit, loss, profit_percent, loss_percent;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);
    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit = %.3f\n", profit);
        profit_percent = (profit/cp)*100;
        printf("Profit percentage =  %.3f percent\n", profit_percent);
    }
    else
    {
        loss = cp - sp;
        printf("Loss = %.3f\n", loss);
        loss_percent = (loss/cp)*100;
        printf("Loss percentage = %.3f percent", loss_percent);
    }
    return 0;
}