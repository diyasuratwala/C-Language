#include<stdio.h>
int main()
{
int a, b, x, y, gcd, lcm, rem;
printf(" enter two numbers: ");
scanf(" %d %d", &a, &b);
x = a;
y = b;
while (y != 0)
{
    rem = x % y;
    x = y;
    y = rem;
}
gcd = x; 
lcm = (a * b) / gcd;
printf(" GCD of %d and %d = %d \n", a, b, gcd);
printf(" LCM of %d and %d = %d \n", a, b, lcm);
return 0;
}