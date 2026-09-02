//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.


#include <stdio.h>

int main()
{
	int num1,num2;
         char op; 
	
	printf(" enter first number: ");
	scanf("%d",&num1);
	
	printf(" enter second number: ");
	scanf("%d", &num2);
	
	printf(" enter operator (+,-,*,/,%%) ");
	scanf(" %c", &op);
	
	if(op == '+')
	{
		printf("result = %d", num1 + num2);
	}
	else if(op == '-')
	{
		printf("result = %d", num1 - num2);
	}
	else if(op == '*')
	{
		printf("result = %d", num1 * num2);
	}
	else if(op == '/')
	{
		printf("result = %d", num1 / num2);
	}
	else if(op == '%')
	{
		printf("result = %d", num1 % num2);
	}
	else
	{
		printf("invalid operator");
	}
	
	
	
	return 0;
	
}