/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
void main()
{
    int n, i,j,k;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        for (k = 1; k <=n-i; k++)
        {
            printf(" ");
        }
        for ( j = 1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");

        
    }
    
}