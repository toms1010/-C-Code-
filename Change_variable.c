#include <stdio.h>

int main ()
{
    int score = 0 ;
    int bonusPoints = 50;
    int highScore;

    printf("Game Start! Current Score: %d\n", score );
    score = 100;
    printf ("You deteated a boss! Score now: %d\n", score );
    score = score + bonusPoints;


    printf("Colleted Bunos!: %d\n", score );

    highScore = score;
    printf("New High Score Saved: %d\n", score );
    

    printf("\n---Result\n---");
    
    printf("Current Score: %d\n", score);
    printf( "High Score still remain: %d\n", highScore);




    return 0;

}