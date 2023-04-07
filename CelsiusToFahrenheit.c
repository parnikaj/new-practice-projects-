#include <stdio.h>

int main()
{
    printf("A program that converts from celsius to fahrenheit.\n"); 
    
    double celsius, fahrenheit; 
    printf("Enter a temperature in celsius:", celsius); 
    scanf("%lf", &celsius); 

    fahrenheit = (celsius * 9/5) + 32; 

    printf("The temperature in fahrenheit is %.2lf", fahrenheit); 

    return 0; 
}