//Write a C program to swap two numbers using a temporary third variable

#include <stdio.h>


 int main()
{
	int a, b, temp;
	
	printf("enter two number");
	scanf("%d %d", &a, &b);
	
	temp = a; //store a in temp
	a = b;   //copy b to a
	b = temp; //copy temp to b
	
	printf("after swapping:");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
	return 0;
}