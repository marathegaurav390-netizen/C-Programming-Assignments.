#include <stdio.h>

void search(int *arr, int n, int key)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(*(arr + i) == key)
        {
            printf("Number found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Number not found in array\n");
    }
}

int main()
{
    int arr[100], n, i, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    search(arr, n, key);

    return 0;
}