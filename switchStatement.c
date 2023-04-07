#include <stdio.h>

int main()
{
    int slices; 

    printf("Enter the number of pizza slices you ate:", slices);
    scanf("%d", &slices); 

    int caloriesPerSlice = 250; 

    switch(slices)
    {
        case 1: 
            printf("You did a great job!\n"); 
            break;
        case 2: 
             printf("You did an okay job!\n"); 
             break;
        case 3: 
             printf("You did a bad job!\n"); 
             break;
        case 4: 
             printf("You are a dissapointment!\n");  
             break;     
        default:
             printf("Uhhhh ohhhhh!\n"); 
        break;
    }

        printf("You had %d calories.\n", caloriesPerSlice * slices); 
    return 0; 
}
