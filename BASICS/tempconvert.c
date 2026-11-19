#include <stdio.h>
int main()
{
    float c, f;
    printf(" enter the temperature in celsius: ");
    scanf(" %f", &c);

    f = (9.00 / 5.00) * c + 32;
    printf(" the temperature in fahrenheit : %f\n", f );

    printf(" enter the temperature in fahrenheit: ");
    scanf(" %f", &f);

    c = (5.00 / 9.00) * (f - 32);
    printf(" the temperature in celsius : %f\n", c );
    return 0;

}