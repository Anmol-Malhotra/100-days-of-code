/*
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/



#include <stdio.h>
int main()
{
    int i, j, sp = 5;
    for (i = 1; i <= 5; i++)
    {
        for (int k = sp; k < 5; k++)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
           printf("*");
        }
        printf("\n");
        sp--;
    }
    return 0;
}
