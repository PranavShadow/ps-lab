#include<stdio.h>
void main()
{
    char x,y;
    for ( x = 'A'; x <= 'C'; x++)
    {
        for ( y = 'A'; y <= x; y++)
        {
            printf("%c ", x);
        }
        printf("\n");
    }
    
}