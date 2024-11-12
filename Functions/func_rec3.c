// Strong numbers less than or equal to N
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

int strong(int n)
{
    int e = n, dig, str = 0;
    while (n != 0)
    {
        dig = n % 10;
        str = str + fact(dig);
        n = n / 10;
    }
    return (str == e);
}

int main()
{
    int N;
    printf("Enter Element: ");
    scanf("%d", &N);


    for (int i = 1; i <= N; i++)
    {
        if (strong(i))
        {
            printf("%d\n", i); 
        }
    }

    return 0;
}
