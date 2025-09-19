// Write a program to reverse a given number.




#include <stdio.h>

int main() 
{
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) 
    {
        digit = num % 10;       // Get last digit
        rev = rev * 10 + digit; // Append to reversed number
        num = num / 10;         // Remove last digit
    }

    printf("Reversed number is: %d\n", rev);

    return 0;
}