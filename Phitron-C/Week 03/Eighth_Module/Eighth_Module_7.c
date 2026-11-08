#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand(time(0));
    int hiddens = rand() % 100 + 1;
    // printf("%d\n", hiddens);

    int number_of_guesses = 0;

    while (number_of_guesses < 10) {
        int guess;
        scanf("%d", &guess);

        if (guess == hiddens) {
            printf("You are right\n");
            break;
        }
        else if (guess > hiddens) {
            printf("Guess smaller\n");
        }
        else {
            printf("Guess larger\n");
        }
        number_of_guesses++;
    }
    if (number_of_guesses == 10) {
        printf("You are wrong");
    }
    return 0;
}