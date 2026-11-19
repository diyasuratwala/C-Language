#include <stdio.h>
int main()
{
    float a, b;
    char op;
    printf(" enter two numbers: ");
    scanf(" %f %f", &a, &b);

    printf(" enter the operation to be performed: ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            printf(" addition = %.2f \n", a + b);
            break;
        case '-':
            printf(" subtraction = %.2f \n", a - b);
            break;
        case '*':
            printf(" multiplication = %.2f \n", a * b);
            break;
        case '/':
          if ( b == 0)
            {
                printf(" division by zero is not allowed \n");
            }
          else
            printf(" division = %.2f \n", a / b);
            break;  
        default :
            printf(" invalid operation \n");

    }
    return 0;
}