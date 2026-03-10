#include <stdio.h>
#include <stdbool.h>
/*
    function prototype is to provide the compiler w/ information
    about the function name , return type and parameters before its
    actual definition. enable the type checking and allows function
    to be use before the they're defined.
    improves readability , orgnationa and helps to errors

*/
void hello (char name[], int age);// this function prototype
bool ageCheck(int age);

int main ()
{
    hello("jillian", 10);

    if (ageCheck(14))
    {
        printf ("You are a adult ");
    }
    else 
    {
        printf ("You are not a adult");
    }
    return 0;
}

void hello (char name[], int age)
{
    printf("Hello %s\n",name);
    printf ("Hello are %d years old ", age);
}

bool ageCheck (int age)
{

    return age >= 16;

}