//Write a program to print all perfect numbers in given range using the function.
#include<stdio.h>
int perfect(int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        if (n%i==0)
        {
            c=c+i;
        }
        
    }
    if(c==n)
    return 1;
    else
    return 0;
}

int main()
{
    int n;
    printf("Enter Range: ");
    scanf("%d",&n);
    printf("Perfect Numbers less than and equal to %d:\n",n);
    for (int i = 1; i <=n; i++)
    {
        if (perfect(i))
        {
            printf("%d\n",i);
        }
        
    }

}