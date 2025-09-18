#include <stdio.h>
int main()
{
    int num, factorial, sum = 0, a;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = num; i > 0; i/=10)
    {
         a = i % 10;
         factorial = 1;
        for (int j = 1; j <= a; j++)
        {
            factorial *= j;
        }
        sum += factorial;
    }    
    printf("%d", sum);
    return 0 ;
}