#include <stdio.h>
int main()
{
    int n, binary = 0, rem, place = 1;
    printf(" enter a decimal number: ");
    scanf(" %d", &n);
    for (; n > 0; n = n / 2)
    {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
    }
    printf(" binary number = %d \n", binary);
    return 0;
}