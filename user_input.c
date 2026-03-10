#include <stdio.h>

int main ()
{
    char name [100];
    printf ("what is your name?");
    scanf("%s", name);

    printf("your name is %s\n", name);

    int age ;
    printf("what is your age?");
    scanf("%d", &age);
    printf("you are age is %d\n", age);

    return 0;
}


