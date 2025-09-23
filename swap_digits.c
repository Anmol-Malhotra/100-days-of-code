//Write a program to swap the first and last digit of a number.



#include <stdio.h>
#include <math.h>
int main()
{
    int num, digit,  first, last, middle, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10)
    {
        printf("Swapped number: %d", num);
        return 0;
    }
    digit = (int)log10(num);                   // Total digits - 1
    first = num / pow(10, digit);              // First digit
    middle = (num % (int)pow(10, digit)) / 10; // Remove first and last digits
    last = num % 10;                           // Last digit
    swapped = last * pow(10, digit) + middle * 10 +  first;
    printf("Swapped number: %d\n", swapped);
    return 0;
}