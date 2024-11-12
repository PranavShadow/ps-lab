#include <stdio.h>
int palin(int n)
{
    int rev = 0, e = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (e == rev)
        return 1;
    else
        return 0;
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (palin(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
}
