#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("A program to check whether a number is postive negative or zero.\n"); 
    int num; 

    printf("Enter a number: ", num ); 
    scanf("%d", &num); 

    if(num > 0 )
    { 
        printf("The number %d is postive.", num); 
    } else if(num < 0) 
    {
        printf("The number %d is negative.", num); 
    } else 
    {
        printf("The number is zero."); 
    }
    return 0; 
}