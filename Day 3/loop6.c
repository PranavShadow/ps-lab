#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=2*i-1;j++)
        {
            printf("%d",j);
        }
                for(j=2*i-2;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}