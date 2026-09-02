//3. Print perfect numbers in the given range 1 to n.


#include <stdio.h>

int main()
{
    int n = 30;
    int i, j;
    int sum;

    for(i = 1; i <= n; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }

        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}