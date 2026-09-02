#include <stdio.h>

void sumArray(int *arr, int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + *(arr + i);
    }

    printf("Sum of all numbers = %d", sum);
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

    sumArray(arr, n);

    return 0;
}
4
