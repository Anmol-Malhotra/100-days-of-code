/*
Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   *
*/



#include <stdio.h>
int main()
{
    int i, j, k, sp=3;
    for (i = 1; i <= 7; i+=2)
    {
        for (k = sp; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
    }
    int a = 7;
    for (i = 5; i > 0; i-=2)
    {
        for (k = a; k <= 7; k++)
        {
           printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        a--;   
    }
    return 0;
}