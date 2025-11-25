#include <stdio.h>

int main() {
    int choice;
    int score = 0;
    int lifeline_used = 0;

    printf("===== WELCOME TO THE QUIZ GAME =====\n\n");

    // Question 1
    printf("Q1. Who is the father of C language?\n");
    printf("1) Dennis Ritchie\n2) James Gosling\n3) Bjarne Stroustrup\n4) Ken Thompson\n");
    printf("Your answer: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong!\n\n");
    }

    // Question 2 with Lifeline Option
    printf("Q2. Which of the following is the capital of India?\n");
    printf("1) Mumbai\n2) Delhi\n3) Kolkata\n4) Chennai\n");
    printf("Press 5 to use lifeline (50-50)\n");
    printf("Your answer: ");
    scanf("%d", &choice);

    if (choice == 5 && lifeline_used == 0) {
        lifeline_used = 1;
        printf("\nLIFELINE ACTIVATED (50-50)!\n");
        printf("Remaining options:\n");
        printf("1) Delhi\n2) Mumbai\n");
        printf("Your answer: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong!\n\n");
        }

    } else if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong!\n\n");
    }

    // Question 3
    printf("Q3. Which data type is used to store decimal values?\n");
    printf("1) int\n2) char\n3) float\n4) long\n");
    printf("Your answer: ");
    scanf("%d", &choice);

    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong!\n\n");
    }

    printf("===== QUIZ FINISHED =====\n");
    printf("Your Total Score: %d / 3\n", score);

    return 0;
}