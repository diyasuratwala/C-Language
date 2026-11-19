#include <stdio.h>
int main()
{
    int n, digit, sum = 0, rev = 0;
    printf(" enter a number: ");
    scanf(" %d", &n);

    for (; n > 0; n = n / 10)
    {
        digit = n % 10;
        sum = sum + digit;
        rev = rev * 10 + digit;
    }
    printf(" sum of digits = %d \n", sum);
    printf(" reverse of number = %d \n", rev);
    return 0;
}