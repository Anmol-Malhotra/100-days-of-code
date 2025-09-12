#include <stdio.h>

int main() 
{
    int num, original, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Save original number

    while (num != 0) 
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (rev == original) // Use comparison operator
    {
        printf("It is a Palindrome\n");
    }
    else
    {
        printf("It is not a Palindrome\n");
    }

    return 0;
}