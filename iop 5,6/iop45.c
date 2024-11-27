#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int r, guessnumber = 0,count=0; // Initialize guessnumber to 0
    srand(time(NULL)); // FINDING A RANDOM NUMBER FROM SYSTEM TIME
    r = rand() % 100; // %100 is here so that number lies between 0 to 99
printf("you will be given ten chances to guess the number \n");
    printf("Guess the number: ");

    while (guessnumber != r) { // Loop until the user guesses correctly
        count++;
        if(count<10){
        scanf("%d", &guessnumber);

        if (guessnumber > r) {
            printf("Guessed number is greater than the random number.\n");
                   
        } else if (guessnumber < r) {
            printf("Guessed number is smaller than the random number.\n");
                  
        } else {
            printf("You guessed it right!\n");
             printf(" NO OF COUNTS   : %d",count);
            break; // Exit the loop if the user guesses correctly
           
        }}
        else{
            printf("You have used 10 chances. Game Over!\n");
            break;
        }
    }

    return 0;
}