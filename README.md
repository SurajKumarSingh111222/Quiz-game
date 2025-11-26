



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


https://github.com/SurajKumarSingh111222/Quiz-game/blob/656b482dae7697505001d553bceb1c4e04010122/WhatsApp%20Image%202025-11-25%20at%2019.48.41_864e83e7.jpg



