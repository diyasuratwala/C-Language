#include <stdio.h>
int main()
{
    int i, a = 0, b = 1, next, n;
    printf(" enter the number of terms: ");
    scanf(" %d", &n);

    printf(" fibonacci series: \n");
    for (i = 0; i <= n; i++)
    {
        printf(" %d", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}