// Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t;
    float s, c;
     printf("Enter initial amount of money: ");
     scanf("%f", &p);
     printf("Annual interest rate (in percentage): ");
     scanf("%f", &r);
     printf("Enter duration (in years): ");
     scanf("%f", &t);
     s = (p*r*t)/100.0;
     printf("Simple Interest = %.2f\n", s);
     c = p * pow((1.0 + r/100), t) - p;
     printf("Compound Interest = %.2f", c);
     return 0;
}