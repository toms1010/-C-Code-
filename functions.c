#include <stdio.h>

// This is the function definition. 
// It takes a string (char array) and an integer as inputs.
void happyBirthday(char name[], int age)

{
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);
}

int main() 
{
   
    char name[] = "Bro";
    int age = 25;

    
    happyBirthday(name, age);

    return 0;
}