//4 Check the given number is prime or not. Input: n = 7 Output: Prime




#include <stdio.h>

int main()
{
    int i;
    int n;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    
    if (n <= 1)
    {
        printf("Not Prime Number");
    }
    else
    {
        for (i = 2; i <= n - 1; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf("Prime Number");
        }
        else
        {
            printf("Not Prime Number");
        }
    }

    return 0;
}