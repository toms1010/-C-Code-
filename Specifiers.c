#include <stdio.h>

int main() 
{
    // 1. Data Declarations
    int age = 25;
    float height = 5.11;
    double pi_precision = 3.1415926535;
    char grade = 'A';
    char name[] = "Alex";
    int* ptr = &age; 

    // 2. Printing using various Specifiers
    printf("--- USER PROFILE ---\n");

    // %s for Strings
    printf("Name           : %s\n", name);

    // %d for Integers
    printf("Age            : %d years old\n", age);

    // %f for Floats (limited to 2 decimal places)
    printf("Height         : %.2f feet\n", height);

    // %lf for Double (shows more precision)
    printf("Math Constant  : %.10lf\n", pi_precision);

    // %c for Characters
    printf("Current Grade  : %c\n", grade);

    // %p for Pointers (Memory Address)
    printf("Memory Address : %p\n", (void*)ptr);

    printf("--------------------\n");

    return 0;
}