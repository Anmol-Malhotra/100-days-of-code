//Find the digit that occurs the most times in an integer number.




#include <stdio.h>
int main()
{
    int num, digit, digit_count[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        num = -num;
    }
    while (num > 0)
    {
        digit = num % 10;
        digit_count[digit]++;
        num /= 10;
    }
    int max_digit = 0;
    for (int i = 0; i < 10; i++)
    {
        if (digit_count[i] > digit_count[max_digit])
        {
            max_digit = i;
        }
    }
    printf("Digit that occurs the most: %d\n", max_digit);
    printf("It appears %d times.\n", digit_count[max_digit]);
    return 0;
}