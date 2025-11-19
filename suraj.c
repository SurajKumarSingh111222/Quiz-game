#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score = 0;
    int answer;

    printf("=====================================\n");
    printf("      Welcome to the Quiz Game!\n");
    printf("=====================================\n\n");

    printf("Rules:\n");
    printf("-> There are 5 questions.\n");
    printf("-> Each correct answer gives you 1 point.\n");
    printf("-> Type the number (1-4) corresponding to your answer.\n\n");

    // Question 1
    printf("1. Who is known as the father of the C language?\n");
    printf("   1) Steve Jobs\n");
    printf("   2) Dennis Ritchie\n");
    printf("   3) James Gosling\n");
    printf("   4) Bjarne Stroustrup\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf(" Correct!\n\n");
        score++;
    }
    else
    {
        printf(" Wrong! The correct answer is 2) Dennis Ritchie\n\n");
    }

    // Question 2
    printf("2. Which data type is used to store characters in C?\n");
    printf("   1) int\n");
    printf("   2) char\n");
    printf("   3) float\n");
    printf("   4) double\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf(" Correct!\n\n");
        score++;
    }
    else
    {
        printf(" Wrong! The correct answer is 2) char\n\n");
    }

    // Question 3
    printf("3. What is the default return type of 'main()' in C?\n");
    printf("   1) void\n");
    printf("   2) int\n");
    printf("   3) float\n");
    printf("   4) char\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf(" Correct!\n\n");
        score++;
    }
    else
    {
        printf(" Wrong! The correct answer is 2) int\n\n");
    }

    // Question 4
    printf("4. Which symbol is used to denote a single-line comment in C?\n");
    printf("   1) //\n");
    printf("   2) /* */\n");
    printf("   3) #\n");
    printf("   4) --\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf(" Correct!\n\n");
        score++;
    }
    else
    {
        printf(" Wrong! The correct answer is 1) //\n\n");
    }

    // Question 5
    printf("5. Which of the following is a loop structure in C?\n");
    printf("   1) if\n");
    printf("   2) while\n");
    printf("   3) switch\n");
    printf("   4) goto\n");
    printf("Your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf(" Correct!\n\n");
        score++;
    }
    else
    {
        printf(" Wrong! The correct answer is 2) while\n\n");
    }

    // Final Score
    printf("=====================================\n");
    printf("           QUIZ COMPLETED!\n");
    printf("=====================================\n");
    printf("Your Total Score: %d / 5\n", score);

    if (score == 5)
        printf(" Excellent! You're a C master!\n");
    else if (score >= 3)
        printf(" Good job! Keep practicing.\n");
    else
        printf(" Better luck next time.\n");

    printf("\nThank you for playing!\n");
    return 0;
}
