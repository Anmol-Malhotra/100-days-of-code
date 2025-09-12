//Write a program to find the product of odd digits of a number.



#include <stdio.h>
int main()
{
    int num, digit;
    int product = 1;
    int odd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Enter a number greater than 0");
        return 0;
    }
    for (int i=num;i>0;i=i/10)
    {
        int r =i%10;
        if(r%2!=0)
        {
            product*=r;
            odd ++;

        }
        
    }

    if (odd > 0)
    {
        printf("Product of odd digits = %d\n", product);
    }
    else
    {
        printf("No odd digits\n");
    }
    return 0;
}