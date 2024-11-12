//You have been given an array/list(ARR) of size N. You need to swap every pair of alternate boundry elements in the array/list. You don't need to print or return anything, just change in the input array itself.
#include <stdio.h>
int main()
{
    int i, n, a[100], temp;
    printf("Enter the Size of array: ");
    scanf("%d", &n);
    printf("Enter Array Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i+=2)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}