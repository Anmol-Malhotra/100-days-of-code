/*
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/



#include <stdio.h>
int main()
{
    int i, j, k, sp=4;
    for  (i = 5; i > 0; i--)
    {
        for (k = sp; k >= 0; k--)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        sp--;
    }
    return 0;
}