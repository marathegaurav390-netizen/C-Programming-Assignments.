//Write a C program to convert given minutes into hours and remaining minutes.



#include <stdio.h>

int main()
{
    int minutes, hours, rem;

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes /60;
    rem = minutes % 60;

    printf("%d Hours %d Minutes", hours, rem);

    return 0;
}