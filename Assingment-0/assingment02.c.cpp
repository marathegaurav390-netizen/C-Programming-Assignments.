//Write a C program to find the area of a circle.


#include <stdio.h>

int main()
{
	float radius, area;
	
	printf("enter the radius of the circle: ");
	scanf("%f", &radius);
	
	area = 3.14 * radius * radius;
	
	printf("area of the circle = %.2f\n",area);
	
	return 0;
}