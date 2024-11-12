// Write a program to find mean and median of five numbers using function
#include <stdio.h>
double calMean(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return (double)(sum / size);
}

int calMedian(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    if (size % 2 == 0)
    {
        return a[size / 2];
    }
    else
    {
        return a[(int)size / 2];
    }
}

void main()
{
    int a[100], n, m2;
    double m1;
    printf("Enter no. of Subjects to check for: ");
    scanf("%d", &n);
    printf("Enter Subject Marks: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    m1 = calMean(a, n);
    m2 = calMedian(a, n);
    printf("Mean = %.2lf\n", m1);
    printf("Median = %d", m2);
}