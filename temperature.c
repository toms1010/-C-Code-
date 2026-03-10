#include <stdio.h>

int main ()
{
    char choice ='\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf  ("TEMPERATUIRE CONVERSION PROGRAM");
    printf  ("C. Celsius to Fahrenheit\n");
    printf  ("F. Fahrenheit To Celsius\n");
    printf  ("Is the temp is Celsius (c) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if(choice == 'C')
    {
        printf ("Enter the temperature in Celsius: ");
        scanf ("%f", &celsius);
        fahrenheit = (celsius * 9/5) +  32;
        printf ("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius ,fahrenheit);

    }

    else if ( choice == 'F')
    {
        printf ("Enter the  Celsius in temperature: ");
        scanf ("%f", &fahrenheit);
        fahrenheit = (celsius * 9/5) +  32;
        printf ("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius ,fahrenheit);

    }
    else 

    {
    printf ("Invalid choice");
    }

    return 0 ;
}