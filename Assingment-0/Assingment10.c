//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.



#include <stdio.h>

int main(){
	
	int marks1, marks2, marks3, marks4, marks5, total;
	float percentage;
	
	printf(" enter marks of 5 subject: ");
	scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);
	
	total = marks1 + marks2 + marks3 + marks4 + marks5;
	
	percentage = (total / 500.0) * 100;
	
	printf("total marks = %d\n", total);
	printf("percentage = %.2f\n", percentage);
	
	return 0;
	
	
	}