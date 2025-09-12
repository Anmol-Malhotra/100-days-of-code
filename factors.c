//Write a program to print all factors of a given number.



#include <stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a number greater than zero.\n");
        return 0;
    }

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}