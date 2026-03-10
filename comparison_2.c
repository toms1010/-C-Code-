#include <stdio.h>

int main() {
   
    int n1 = 10, n2 = 20;
    
    int magkaparehoba = n1 == n2; 
    int MagkaibaBa    = n1 != n2; 
    int MasMataas     = n1 > n2;  
    int MasMababa     = n1 < n2;  
    int Goe           = n1 >= n2; 
    int Loe           = n1 <= n2; 

    printf("--- BEFORE CHANGING (n1=10, n2=20) ---\n");
    printf("Equal: %d, Not Equal: %d, Higher: %d, Lower: %d\n\n", 
            magkaparehoba, MagkaibaBa, MasMataas, MasMababa);

   
    n1 = 30; 
    n2 = 30; 

   
    magkaparehoba = n1 == n2; 
    MagkaibaBa    = n1 != n2; 
    MasMataas     = n1 > n2;  
    MasMababa     = n1 < n2;  
    Goe           = n1 >= n2; 
    Loe           = n1 <= n2; 

    printf("--- AFTER CHANGING (n1=30, n2=30) ---\n");
    printf("Equal: %d, Not Equal: %d, Higher: %d, Lower: %d\n", 
            magkaparehoba, MagkaibaBa, MasMataas, MasMababa);

    return 0;
}