



# Quiz Game in C

This is a simple **C console-based Quiz Game** where the user answers multiple-choice questions.
The game includes:

* Score tracking
* Multiple-choice questions
*  A **50-50 lifeline** (available once)
* User-friendly messages and formatting

---

##  Features

* **Three questions** covering basic programming and general knowledge.
* **50-50 lifeline** for Question 2:
  When the user presses **5**, two incorrect options are removed.
* **Score counter** that displays the final result out of 3.

---

##  How to Compile

Use any C compiler (GCC recommended).

### **Compile:**

```bash
gcc quiz_game.c -o quiz_game
```

### **Run:**

```bash
./quiz_game
```

---

##  Program Flow

1. User is asked multiple-choice questions.
2. Inputs are taken using `scanf()`.
3. Score increments for each correct answer.
4. Lifeline can be used only **once** and only for Question 2.
5. Final score is displayed at the end.

---

##  Code Overview

The program uses:

* `if-else` conditions for answer checking
* A variable `score` to track correct answers
* A variable `lifeline_used` to ensure the lifeline is used only once
* Standard I/O from `<stdio.h>`

---

## Sample Output

```
===== WELCOME TO THE QUIZ GAME =====

Q1. Who is the father of C language?
1) Dennis Ritchie
2) James Gosling
3) Bjarne Stroustrup
4) Ken Thompson
Your answer: 1
Correct!

Q2. Which of the following is the capital of India?
1) Mumbai
2) Delhi
3) Kolkata
4) Chennai
Press 5 to use lifeline (50-50)
Your answer: 5

LIFELINE ACTIVATED (50-50)!
Remaining options:
1) Delhi
2) Mumbai
Your answer: 1
Correct!

Q3. Which data type is used to store decimal values?
1) int
2) char
3) float
4) long
Your answer: 3
Correct!

===== QUIZ FINISHED =====
Your Total Score: 3 / 3


<img width="665" height="560" alt="image" src="https://github.com/user-attachments/assets/803db583-2ed5-4beb-8808-b5aed130e341" />


