#include<stdio.h>
void main()
{
    char x,y;
    for ( x = 'E'; x >= 'A'; x--)
    {
        for ( y = x; y <= 'E'; y++)
        {
            printf("%c ", y);
        }
        printf("\n");
    }
    
}