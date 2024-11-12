//You have been given an integer value N. Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,7.......8,6,4,2.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i+=2)
    {
        printf("%d ",i);
    }
    if(!(n%2==0))
    {
        n=n-1;
    }
    for ( i = n; i >= 2; i-=2)
    {
        printf("%d ",i);
    }
}