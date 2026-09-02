#include <stdio.h>

void add(int *a, int *b)
{
    int sum;
    sum = *a + *b;

    printf("Addition = %d", sum);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    add(&a, &b);

    return 0;
}