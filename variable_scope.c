#include <stdio.h>
/*
 a variable is a container that holds a value.
 variable scope is refers to where a variable 
 recognized and accessible. Vatiable can share
 the same name if they're in different scopes{}


*/


int add(int x , int y)

{
    
    int result  = x + y ;
    return result;
}

int subtract(int x , int y)

{
    
    int result  = x - y ;
    return result;
}

int main ()
{

    int result1 = add (4,4);
    printf ("this the sum%d\n", result1);
    int result2 = subtract(4, 2);
    printf ("this the Difference %d\n", result2);
    
    return 0;
}