#include <stdio.h>

void oddEven(int *arr, int n)
{
    int i;

    printf("Even numbers: ");

    for(i = 0; i < n; i++)
    {
        if(*(arr + i) % 2 == 0)
        {
            printf("%d ", *(arr + i));
        }
    }

    printf("\nOdd numbers: ");

    for(i = 0; i < n; i++)
    {
        if(*(arr + i) % 2 != 0)
        {
            printf("%d ", *(arr + i));
        }
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

    oddEven(arr, n);

    return 0;
}