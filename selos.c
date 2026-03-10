#include <stdio.h>
#include <unistd.h>

int main()
{
    int x = 1;

    while (1)
    {
        printf("%d - nag seselos ako\n", x);
        x++;
        sleep(1); 
    }

    return 0;
}
