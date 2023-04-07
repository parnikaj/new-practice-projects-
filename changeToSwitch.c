#include <stdio.h>

int main()
{
    int input; 
    printf("Choose a menu option 1-4:\n"); 
    printf("1. Add a patient\n");
    printf("2. View a patient\n");
    printf("3. Search patients\n"); 
    printf("4. Exit\n"); 
    scanf("%d", &input); 

    switch(input)
    {
        case 1:
         printf("1. Adding a patient\n");
         break;
        case 2:
         printf("2. Viewing a patient\n");
         break;
        case 3: 
         printf("3. Searching patients\n");
         break;
        case 4: 
         printf("4. Exiting...\n"); 
         break;
        default: 
         printf("Incorrect input\n"); 
         break; 
    }
    return 0; 
}
