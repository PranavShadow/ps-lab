/*
    1
   1 2
  2 3 4
 4 5 6 7
7 8 9 10 11
This was a result of a tried experiment
*/
#include <stdio.h>
void main()
{
    int n, i, j, k, c = 1;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", c++);
        }
        --c;
        printf("\n");
    }
}