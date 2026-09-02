//Write a C program to input the length and width of a rectangle and find its perimeter.



#include <stdio.h>

int main(){
	
	int length, width, perimeter;
	
	printf("Enter length: ");
	scanf("%d", &length);

	printf(" enter width: ");
	scanf("%d", &width);
	
	perimeter = 2 * (length + width);
	
	printf("perimater of rectangle = %d", perimeter);
	
	return 0;
}