/* 
    1 
   2 3 
  3 4 5 
 4 5 6 7 
5 6 7 8 9 */
#include<stdio.h>
void main()
{
    int n,i,j,k,c=0;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        c=i;
        for(j=i;j<=2*i-1;j++)
        {
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    
}