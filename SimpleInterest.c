#include <stdio.h>

int main()
{
   double p, r, t, si; 
   printf("A program that calculates simple interest.\n"); 

   printf("Enter a principal amount: ", p); 
   scanf("%lf", &p); 

   printf("Enter a rate: ", r); 
   scanf("%lf", &r); 

   printf("Enter a time: ", t); 
   scanf("%lf", &t); 

   si = (p * r * t) / 100; 

   printf("The simple interest is %.2lf", si); 

    return 0; 

}
