//Write a C program to find the square and cube of a given number.




#include <stdio.h>

int main()
{
	int num, square, cube;
	
	printf("enter the number");
	scanf("%d", &num);
	
	square = num = num;
	cube = num * num * num;
	
	printf("square = %d\n", square);
	printf("cube = %d\n", cube);
	  
	return 0;
	
}