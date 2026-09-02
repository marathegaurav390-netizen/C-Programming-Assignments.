//4. Print strong numbers in the given range 1 to n.

#include <stdio.h>

int main()
{
    int n, i, num, temp, digit;
    int fact, sum;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d are: ", n);

    for(i = 1; i <= n; i++)
    {
        num = i;
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            digit = temp;
            fact = 1;

            for(int j = 1; j <= digit; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}