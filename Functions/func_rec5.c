//Display Prime Numbers Between Intervals Using Function
#include<stdio.h>
int checkPrime(int n)
{
    int c=0;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
    

}

int main()
{
    int a,b;
    printf("Enter the Range of Numbers between which prime numbers are to be detected: ");
    scanf("%d%d",&a,&b);

    for (int i=a+1;i<b;i++)
    {
        if(checkPrime(i))
        printf("%d\n",i);

    }

}