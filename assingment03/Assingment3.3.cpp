//3 Sum of numbers in given range. 
//Find sum of numbers from start to end. 
//Input: start = 1, end = 5 
//Output: 15


#include <stdio.h>

int main()
{
	int start = 1;
	int end = 5;
	int sum = 0;
	int i;
	
	for(i = start; i <= end; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	
	return 0;

}

   