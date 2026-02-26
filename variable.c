#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;
    char name[50]; 

 printf("Enter your name: ");
    scanf("%s", name);

    
    printf("Enter your age: ");
    scanf("%d", &age);


    printf("Enter your height: ");
    scanf("%f", &height);

    
    printf("Enter your favorite letter: ");
    scanf(" %c", &grade); 

    int doubleAge = age * 2;

    printf("\n--- RESULT ---\n");
    printf("My name is %s.\n", name);
    printf("If I were twice as old, I'd be %d.\n", doubleAge);
    printf("My height is %.1f and my favorite letter is %c.\n", height, grade);

    return 0;
}