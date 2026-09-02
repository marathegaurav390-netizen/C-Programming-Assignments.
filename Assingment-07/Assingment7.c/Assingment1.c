//1. Find minimum and maximum number in array.

#include <stdio.h>

void minMax(int *arr, int n)
{
    int i, min, max;

    min = arr[0];
    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Minimum number = %d\n", min);
    printf("Maximum number = %d\n", max);
}

int main()
{
    int arr[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minMax(arr, n);

    return 0;
}