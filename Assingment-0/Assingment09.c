//Write a C program to input the base and height of a triangle and calculate its area.



#include <stdio.h>

int main(){
	
	float base, height, area;
	
	printf("enter base:");
	scanf("%f", &base);
	
	printf("enter height: ");
	scanf("%f", &height);
	
	area = (base * height) / 2;
	
	printf("Area of triangle = %.2f", area);
	
	return 0;
}