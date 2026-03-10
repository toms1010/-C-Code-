#include <stdio.h>

int main ()
{
    int age = 0;

    printf ("Enter your age: ");
    scanf("%d", &age);

    if ( age >= 65)
    {
        printf("you are a senior");
    }
    else if( age < 0)
    {
        printf("you are haven't been born yet");
    }

    else if ( age == 0)
    {
        printf ("You are a newborn");
    }
    else
    {
        printf("you are a child");
    }


    return 0;

}