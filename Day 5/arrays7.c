// Reverse the elements of an Array. That is, first element should become last and last should come at first place.
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
    for (i = 0; i < n / 2; i++)
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