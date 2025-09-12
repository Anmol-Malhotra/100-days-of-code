#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, digit, count = 0;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    // Count number of digits
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = num;
    // Calculate sum of digits raised to the power of count
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp /= 10;
    }
    if ((int)sum == num)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
    return 0;
}