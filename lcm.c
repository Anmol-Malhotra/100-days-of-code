//Write a program to find the LCM of two numbers.



#include <stdio.h>
int main()
{
    int first_num, second_num, orig_first, orig_second, hcf, lcm;

    printf("Enter first positive number: ");
    scanf("%d", &first_num);
    printf("Enter second positive number: ");
    scanf("%d", &second_num);

    orig_first = first_num;
    orig_second = second_num;

    while (first_num != second_num)
    {
        if (first_num > second_num)
        {
            first_num = first_num - second_num;
        }
        else
        {
            second_num = second_num - first_num;
        }
    }
    
    hcf = first_num;
    lcm = (orig_first * orig_second) / hcf;

    printf("LCM of %d and %d = %d", orig_first,  orig_second, lcm);
    return 0;
}