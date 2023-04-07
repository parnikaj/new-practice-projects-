#include <stdio.h>
#include<stdbool.h>

int main()
{
    int num, even, odd; 
    printf("This is a program to check whether an integer is even or odd.\n"); 
    printf("Enter an integer: ", num); 
    scanf("%d", &num); 

    if (num % 2 == 0)
    {
        printf("The number is even.\n"); 
    } else 
    {
        printf("The number is odd.\n"); 
    }
    return 0; 
}