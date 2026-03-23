#include <stdio.h>

#include <string.h>

int main ()
{
    char food [] = "Pizza";
    char bestfood[strlen(food)];
    strcpy (bestfood, food);
    printf ("%s", bestfood);
    return 0;
}