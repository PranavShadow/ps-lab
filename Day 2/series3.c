#include <stdio.h>
#include <math.h>
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
    int n, sum = 1, i,x;
    printf("Enter the Value of N and X: ");
    scanf("%d %d", &n, &x);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (pow(x,i)/fact(i));
    }
    printf("%d", sum);
}

// have to check