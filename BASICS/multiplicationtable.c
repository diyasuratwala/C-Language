#include <stdio.h>
int main()
{
    int n, limit, i, j;
    printf(" enter a number:");
    scanf(" %d", &n);
    printf(" enter the limit:");
    scanf(" %d", &limit);
    for (i = 1; i <= limit; i++)
    {
        printf(" %d * %d = %d \n", n, i, n * i);
    }
    return 0;
}