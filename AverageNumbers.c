#include <stdio.h>

int main()
{
    printf("This is a program that gives the average of three numbers.\n"); 
    int num1 , num2 , num3, avg; 
    printf("Enter three numbers:", num1, num2, num3); 
    scanf("%d %d %d", &num1, &num2, &num3); 

    avg = (num1 + num2 + num3)/3; 
    printf("The average of the three numbers is %d\n", avg); 
    return 0; 
}