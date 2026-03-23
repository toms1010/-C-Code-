#include <stdio.h>
#include <string.h>
int main ()
{
    char x[100], y[100], z[100], c[100], b [100];
    int  ln1,ln2, ln3, ln4, ln5 ;
    int result;
    
    printf ("Enter the first string: ");
    scanf (" %s", &x);
    printf ("Enter the second string: ");
    scanf (" %s", &y);
    printf ("Enter the third string: ");
    scanf (" %s", &z);
    printf ("Enter the fourth string: ");
    scanf (" %s", &c);
    printf ("Enter the fifth string: ");
    scanf (" %s", &b);
    
    

    
    ln1 = strlen(x);
    ln2 = strlen(y);
    ln3 = strlen(z);
    ln4 = strlen(c);
    ln5 = strlen(b);
    printf ("Length of the first string: %d\n", ln1);
    printf ("Length of the second string: %d\n", ln2);
    printf ("Length of the third string: %d\n", ln3);
    printf ("Length of the fourth string: %d\n", ln4);
    printf ("Length of the fifth string: %d\n", ln5);
    
    
    
    
    result = (ln1 + ln2) / (ln3- ln4 );
    
    printf ("Result: %d", result);

    
    
    
    return 0;
}