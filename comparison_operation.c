#include <stdio.h>
int main ()

{
    int n1 = 10, n2 = 20;
    
    int magkaparehoba = n1 == n2 ;
    int MagkaibaBa = n1 != n2 ;
    int MasMataas = n1 > n2;
    int MasMababa = n1 < n2;
    int Goe = n1 >= n2;
    int Loe = n2 <= n2;

    
    printf ("%d", magkaparehoba);
    printf("%d", MagkaibaBa);

    printf("%d", MasMataas);
    printf ("%d", MasMababa); 
    printf ("%d", Goe);  
     printf ("%d", Loe);    

   



    return 0;
}