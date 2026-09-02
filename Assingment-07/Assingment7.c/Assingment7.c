#include <stdio.h>

int main()
{
    int a[5], b[5], c[5];
    int i;

    printf("Enter 5 elements of first array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 elements of second array:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    // Addition of two arrays
    for(i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Third array after addition:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}