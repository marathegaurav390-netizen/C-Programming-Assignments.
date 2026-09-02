//1. Print armstrong numbers in the given range 1 to n.


#include <stdio.h>

int main()
{
	int i;
	int n;
	int count =0;
	int sum = 0;
	int num;
	
	
	printf("enter the number :");
	scanf("%d", &n);
	
	for (i = 0; i <= n; i++)
	{
	   if ( sum == num)
	   {
	   	  printf("Armstrong Number");
	   }
	   else
	   {
	   	printf("Not Armstrong Number");
	   }  
	}
	
	return 0;
}