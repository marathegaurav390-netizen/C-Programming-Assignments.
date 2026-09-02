//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he 
//is a student and he has purchased more than 500 than discount is 20% otherwise 
//discount is 10%.But if he is not a student then if he has purchased more than 600 
//discount is 15% otherwise there is not discount. 

#include <stdio.h>

int main()
{
	int price;
	
	printf(" enter the price");
	scanf(" %d", &price);
	
    char student;
    
    printf("Are you a student (y/n): ");
    scanf(" %c", &student);
    
    if (student == 'y')
 {
     if (price > 500 )
     {
     	printf("20%% discount");
	 }

	 else
	 {
	 	printf("10%% discount");
	 }
}
	 if (student == 'n')
 { 
     if (price > 600 )
     {
     	printf("15%% discount");
	 }
	 else
	 {
	 	printf("no discount");
	 }
	 }
	 return 0;
	 
}
    