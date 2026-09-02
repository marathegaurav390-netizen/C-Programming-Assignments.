#include <stdio.h>

void primeNumbers(int *arr, int n)
{
    int i, j, count;

    printf("Prime numbers are: ");

    for(i = 0; i < n; i++)
    {
        count = 0;

        if(*(arr + i) > 1)
        {
            for(j = 1; j <= *(arr + i); j++)
            {
                if(*(arr + i) % j == 0)
                {
                    count++;
                }
            }

            if(count == 2)
            {
                printf("%d ", *(arr + i));
            }
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

    primeNumbers(arr, n);

    return 0;
}