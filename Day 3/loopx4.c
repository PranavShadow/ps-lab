/*
   1
  121
 12321
1234321
*/


#include <stdio.h>
void main()
{
    int n, i, j, k;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}