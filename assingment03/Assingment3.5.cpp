//5 Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong

#include <stdio.h>

int main()
{
    int n = 153;
    int temp = n;
    int sum = 0;
    int digit;

    while (n > 0)
    {
        digit = n % 10;                     
        sum = sum + (digit * digit * digit); 
        n = n / 10;                         
    }

    if (sum == temp)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}