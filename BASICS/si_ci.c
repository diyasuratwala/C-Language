#include <stdio.h>
#include <math.h>
int main()
{
    double p, r, t, ci, si, amt;
    printf("enter value of principle, rate, time: ");
    scanf(" %lf %lf %lf ", &p, &r, &t);

    si = (p * r * t) / 100;
    amt = p * pow( 1 + r / 100, t);
    ci = amt - p;
    
    printf(" simple interest = %.2lf \n", si);
    printf(" compound interest = %.2lf \n", ci);
    return 0;
}