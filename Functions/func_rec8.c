// Sum of digits using recursion
#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + sum(n / 10);
    }
}
void main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
}