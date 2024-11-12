#include <stdio.h>
int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n, sum = 0, i;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + fact(i);
    }
    printf("%d", sum);
}