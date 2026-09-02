 // 5. Write a menu driven program to take a number for user and perform operations as follows. 
//Press 1.To check number is even or odd. 
//2.To check number is prime or not. 
//3.To check number is pallindrome or not. 
//4.To check number is positive, negative or zero. 
//5.To reverse a number. 
//6.To find sum of digits.  code do 
   
   
   
   #include <stdio.h>

int main()
{
    int n, choice, i, count, temp, digit, reverse, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(n % 2 == 0)
                printf("Number is Even");
            else
                printf("Number is Odd");
            break;

        case 2:
            count = 0;

            if(n <= 1)
            {
                printf("Number is Not Prime");
            }
            else
            {
                for(i = 1; i <= n; i++)
                {
                    if(n % i == 0)
                        count++;
                }

                if(count == 2)
                    printf("Number is Prime");
                else
                    printf("Number is Not Prime");
            }
            break;

        case 3:
            temp = n;
            reverse = 0;

            while(temp != 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            if(n == reverse)
                printf("Number is Palindrome");
            else
                printf("Number is Not Palindrome");
            break;

        case 4:
            if(n > 0)
                printf("Number is Positive");
            else if(n < 0)
                printf("Number is Negative");
            else
                printf("Number is Zero");
            break;

        case 5:
            temp = n;
            reverse = 0;

            while(temp != 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            printf("Reverse = %d", reverse);
            break;

        case 6:
            temp = n;
            sum = 0;

            while(temp != 0)
            {
                digit = temp % 10;
                sum = sum + digit;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}