// Write a program to find the sum of digits of a number.



#include <stdio.h>
int main()
{
    int num, temp, digits, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        digits = temp % 10;
        sum = sum + digits;
        temp = temp / 10;
    }
    printf("Sum of the digits of %d is: %d", num, sum);
    return 0;
}