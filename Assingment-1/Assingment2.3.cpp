//Write // 3.a program to find greatest of three numbers using nested if-else. 



#include <stdio.h>

int main()
{
	int num1,num2,num3;
	
	printf("enter the three number: ");
	scanf("%d %d %d", &num1,&num2,&num3);
	 
	
if(num1 > num2)
{
	if(num1 > num3)	
	{
		printf("num1 is greatest");
	}
	else	
	{
		printf("num3 is greatest");
	}
}
   else
{

	if (num2 > num3)
    {
    	printf("num2 is greatest");
	}
	else
	{
		printf("num3 is greatest");
	}
}
	
	return 0;
}