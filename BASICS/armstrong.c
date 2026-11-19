#include<stdio.h>
#include<math.h>
int main()
{
    int n, original, sum = 0, rem;
    printf(" enter a number: ");
    scanf(" %d", &n);        
    original = n;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, 3);
        n = n / 10;
    }                   
    if (sum == original)
    {
        printf(" %d is an armstrong number \n", original);
    }
    else
    {
        printf(" %d is not an armstrong number \n", original);
    }
    

    return 0;
}