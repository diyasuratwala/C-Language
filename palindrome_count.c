#include<stdio.h>
int main()
{
    int n, rev = 0, count = 0, original, rem;
    printf(" enter a number: ");
    scanf(" %d", &n);
    original = n;
    while ( n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        count++;
        n = n / 10;
        
    }
    printf(" the number of digits in the number = %d \n", count);
    if (original == rev)
    {
        printf("the number is a palindrome");
    }
    else
    {
        printf("the number is not a palindrome");
    }
    return 0;
}