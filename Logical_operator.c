#include <stdio.h>


int main ()
{
    int coffee = 0;
    int creamer = 0;
    int ask = coffee || creamer;
    int ask_2 = coffee && creamer ;
    int no_coffee = ! coffee;


    printf("Can i drink something? %d\n", ask );
    printf("Is it a perfect cup ? %d\n", ask_2);
    printf ("Do i have No coffee ? %d\n", no_coffee);





    return 0;

}