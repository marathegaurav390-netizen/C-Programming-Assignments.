//Write a C program to input five numbers and find their average.



#include <stdio.h>

int main()
{
	int n1,n2,n3,n4,n5,sum;
	float average;
	
	printf("enter five numbers: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	sum = n1 + n2 + n3 + n4 + n5;
	
	average = sum / 5.0;
	
	printf("Average = %.2f", average);
	
	return 0;
	
}