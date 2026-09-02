#include <stdio.h>

void alternate(int *arr, int n)
{
    int i;

    printf("Alternate elements are: ");

    for(i = 0; i < n; i = i + 2)
    {
        printf("%d ", *(arr + i));
    }
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

    alternate(arr, n);

    return 0;
}