#include <stdio.h>
int main() 

{
    int choice =0;
    float pounds = 0.0f;
    float kilograms = 0.0f;


    printf ("weigth Conversion Calculator\n");
    printf (" 1. kilogram to pounds\n ");
    printf ("2. Pound to kilogram\n ");
    printf ("Enter your choice (1 or 2): ");
    scanf ("%d", &choice );

    if (choice ==1)
    {
       printf ("Enter kilogram to pound: ");
       scanf ("%f", &kilograms);
       pounds = kilograms * 2.20462;
       printf ("%.2f kilograms is equal to %.2f pounds\n", kilograms , pounds);
    } 
    else if ( choice == 2) 
    {
        printf("Enter sound to kilogram: ");
        scanf("%f", &pounds );

        kilograms = pounds / 2.20462;
       printf ("%.2f Pounds is equal to %.2f kilograms\n",  pounds, kilograms );
    }

    else 
    {
        printf ("invalid please enter 1 or 2");
    }

    
    return 0;
}