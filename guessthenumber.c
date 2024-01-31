#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed for random number generation
    int maxNumber;

    printf("\n************************************************************\n");
    printf("*                                                          *\n");
    printf("*               Welcome to Guess the Number!               *\n");
    printf("*                                                          *\n");
    printf("************************************************************\n");

    printf("\nPlease enter your name: ");
    char playerName[50];
    scanf("%s", playerName);

    printf("\nHello, %s! Enter the maximum number for the guessing range: ", playerName);
    scanf("%d", &maxNumber);

    int secretNumber = rand() % maxNumber + 1;  // Generate a random number within the specified range

    int guess, attempts = 0;

    printf("\nI have selected a number between 1 and %d. Try to guess it!\n", maxNumber);

    do {
        printf("\n%s, enter your guess: ", playerName);
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCongratulations, %s! You guessed the number in %d attempts.\n", playerName, attempts);
        }

    } while (guess != secretNumber);

    return 0;
}