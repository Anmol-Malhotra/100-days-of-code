//Write a program to input time in seconds and convert it to hours:minutes:seconds format.


#include <stdio.h>
int main()
{
    int ts, h, m, s;
    printf("Enter time (in seconds): ");
    scanf("%d", &ts);
    h = ts / 3600;
    m = (ts % 3600) / 60;
    s = ts % 60;

    printf("Converted time: %02d:%02d:%02d\n", h, m, s);

    return 0;
}