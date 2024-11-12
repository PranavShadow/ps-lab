// Matrix rotation anti-clockwise at 90 degrees
#include <stdio.h>
int main()
{
    int m, i, j;
    printf("Enter the side of the matrix: ");
    scanf("%d", &m);
    int a[m][m], b[m][m];
    printf("Enter a m*m matrix: ");
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            b[i][j] = a[j][m - 1 - i];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}