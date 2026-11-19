#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2, real, imag;
    printf(" enter the coefficients of a quadratic equation (a, b, c): ");
    scanf(" %f %f %f" , &a, &b, &c);

    d = b * b - 4 * a * c;
    
    if (d > 0)
    {
        r1 = ( -b + sqrt(d) ) / (2 * a);
        r2 = ( -b - sqrt(d) ) / (2 * a);
        printf(" roots are real and distinct \n");
        printf(" root 1 = %.2f \n", r1);
        printf(" root 2 = %.2f \n", r2);
    }
    else if ( d ==0)
    {
        r1 = r2 = -b / (2 * a);
        printf(" roots are real and equal \n");
        printf(" root 1 = root 2 = %.2f \n", r1);
    }
    else
    {
       real = - b / (2 * a);
       imag = sqrt ( - d) / (2 * a);
         printf(" roots are complex and imaginary \n");
         printf(" root 1 = %.2f + %.2fi \n", real, imag);
         printf(" root 2 = %.2f - %.2fi \n", real, imag);
    }
    return 0;
}