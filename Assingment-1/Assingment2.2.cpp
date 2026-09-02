//2.  Accept three sides of a triangle from the user and determine whether the triangle is 
//equilateral, isosceles, or scalene.

#include <stdio.h>

int main()
{
	int side1,side2,side3;
	
	printf("enter three sides");
	scanf("%d %d %d", &side1,&side2,&side3);
	
	if(side1==side2 && side2==side3)
	{
		printf("equlateral triagle");
	}
	else if(side1==side2 || side2==side3 || side1==side3)
	{
		printf("isosceles triangle");
	}
	else 
	{
		printf("scalene triagle");
	}
	return 0;
}