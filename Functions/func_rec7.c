//Armstrong number in the range

#include<stdio.h>
#include<math.h>

int digcount(int n)
{
    int c=0;
    while (n!=0)
    {
        n=n/10;
        c++;
    }
    return c;
    
}
int checkArmstrong(int n)
{
    int dig,e=n,sum=0;
    while(n!=0)
    {
        dig=n%10;
        sum = sum + (int) pow(dig,digcount(e));
        n=n/10;

    }
    if(e==sum)
    return 1;
    else
    return 0;
}

int main()
{
    int a,b;
    printf("Enter the Range of Numbers between which armstrong numbers are to be detected: ");
    scanf("%d%d",&a,&b);

    for (int i=a+1;i<b;i++)
    {
        if(checkArmstrong(i))
        printf("%d\n",i);

    }

}