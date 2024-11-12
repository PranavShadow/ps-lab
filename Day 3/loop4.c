#include<stdio.h>
void main()
{
    char ch='A';
    int x,y,n;
    printf("Tell the No. of lines to be printed for this pattern: ");
    scanf("%d", &n);
    for ( x = 1; x <= n; x++)
    {
        for ( y = 1; y <= x; y++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
    
}