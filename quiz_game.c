#include <stdio.h>
#include <string.h>
#include<ctype.h>

typedef struct {
    char question[256];
    char options[4][100];
    char correct_option;
} Question;

void runQuiz() {
    Question quiz[] = {
        {"What is the capital of France?", {"A. Berlin", "B. Madrid", "C. Paris", "D. Rome"}, 'C'},
        {"Which data structure uses LIFO?", {"A. Queue", "B. Stack", "C. Tree", "D. Graph"}, 'B'},
        {"Who developed the C language?", {"A. Bjarne Stroustrup", "B. Tim Berners-Lee", "C. Dennis Ritchie", "D. James Gosling"}, 'C'},
        {"What is the output of 5 * 6?", {"A. 30", "B. 36", "C. 56", "D. 26"}, 'A'},
        {"Which planet is known as the Red Planet?", {"A. Earth", "B. Mars", "C. Jupiter", "D. Venus"}, 'B'},
        {"What is the binary equivalent of decimal 5?", {"A. 1010", "B. 1100", "C. 1001", "D. 0101"}, 'D'},
        {"Which header file is used for input/output in C?", {"A. stdio.h", "B. math.h", "C. conio.h", "D. string.h"}, 'A'},
        {"Which operator is used for logical AND in C?", {"A. &&", "B. ||", "C. &", "D. |"}, 'A'},
        {"Which loop is guaranteed to run at least once?", {"A. for", "B. while", "C. do-while", "D. infinite"}, 'C'},
        {"What is the size of int in C (typically)?", {"A. 2 bytes", "B. 4 bytes", "C. 8 bytes", "D. 1 byte"}, 'B'},
        {"Which of these is a keyword in C?", {"A. define", "B. Class", "C. return", "D. Function"}, 'C'},
        {"Which company developed the Windows OS?", {"A. Apple", "B. Microsoft", "C. Google", "D. IBM"}, 'B'},
        {"Which symbol is used for comments in C?", {"A. //", "B. #", "C. /* */", "D. Both A and C"}, 'D'},
        {"Which memory is volatile?", {"A. ROM", "B. HDD", "C. RAM", "D. SSD"}, 'C'},
        {"Which function is used to print in C?", {"A. println()", "B. echo()", "C. printf()", "D. display()"}, 'C'}

    };

    int total_questions = sizeof(quiz) / sizeof(quiz[0]);
    int score = 0;
    char answer;

    printf("Welcome to the Quiz Game!\n");
    printf("You will be asked %d questions.\n\n", total_questions);

    for (int i = 0; i < total_questions; i++) {
        printf("Q%d: %s\n", i + 1, quiz[i].question);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }
        printf("Your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        if (toupper(answer) == quiz[i].correct_option) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! Correct answer: %c\n", quiz[i].correct_option);
        }
        printf("\n");
    }

    printf("Quiz Finished!\n");
    printf("Your Score: %d/%d\n", score, total_questions);

    if (score == total_questions)
        printf("Excellent! You're a quiz master!\n");
    else if (score >= 10)
        printf("Good job!\n");
    else
        printf("Keep practicing!\n");
}

int main() {
    runQuiz();
    return 0;
}


// ---------------------------------Output------------------------------------

// Welcome to the Quiz Game!
// You will be asked 5 questions.

// Q1: What is the capital of France?
// A. Berlin
// B. Madrid
// C. Paris
// D. Rome
// Your answer (A/B/C/D): b
// Wrong! Correct answer: C

// Q2: Which data structure uses LIFO?
// A. Queue
// B. Stack
// C. Tree
// D. Graph
// Your answer (A/B/C/D): b
// Correct!

// Q3: Who developed the C language?
// A. Bjarne Stroustrup
// B. Tim Berners-Lee
// C. Dennis Ritchie
// D. James Gosling
// Your answer (A/B/C/D): c
// Correct!

// Q4: What is 5 * 6?
// A. 30
// B. 36
// C. 56
// D. 26
// Your answer (A/B/C/D): a
// Correct!

// Q5: Which planet is known as the Red Planet?
// A. Earth
// B. Mars
// C. Jupiter
// D. Venus
// Your answer (A/B/C/D): b
// Correct!

// Quiz Finished!
// Your Score: 4/5
// Good job!
// abhijit@AbhijitUbantu:~/Desktop/C_Programming_Projects$ gcc quiz_game.c 
// abhijit@AbhijitUbantu:~/Desktop/C_Programming_Projects$ ./a.out
// Welcome to the Quiz Game!
// You will be asked 15 questions.

// Q1: What is the capital of France?
// A. Berlin
// B. Madrid
// C. Paris
// D. Rome
// Your answer (A/B/C/D): c
// Correct!

// Q2: Which data structure uses LIFO?
// A. Queue
// B. Stack
// C. Tree
// D. Graph
// Your answer (A/B/C/D): b
// Correct!

// Q3: Who developed the C language?
// A. Bjarne Stroustrup
// B. Tim Berners-Lee
// C. Dennis Ritchie
// D. James Gosling
// Your answer (A/B/C/D): c
// Correct!

// Q4: What is the output of 5 * 6?
// A. 30
// B. 36
// C. 56
// D. 26
// Your answer (A/B/C/D): a
// Correct!

// Q5: Which planet is known as the Red Planet?
// A. Earth
// B. Mars
// C. Jupiter
// D. Venus
// Your answer (A/B/C/D): b
// Correct!

// Q6: What is the binary equivalent of decimal 5?
// A. 1010
// B. 1100
// C. 1001
// D. 0101
// Your answer (A/B/C/D): d
// Correct!

// Q7: Which header file is used for input/output in C?
// A. stdio.h
// B. math.h
// C. conio.h
// D. string.h
// Your answer (A/B/C/D): a
// Correct!

// Q8: Which operator is used for logical AND in C?
// A. &&
// B. ||
// C. &
// D. |
// Your answer (A/B/C/D): c
// Wrong! Correct answer: A

// Q9: Which loop is guaranteed to run at least once?
// A. for
// B. while
// C. do-while
// D. infinite
// Your answer (A/B/C/D): c
// Correct!

// Q10: What is the size of int in C (typically)?
// A. 2 bytes
// B. 4 bytes
// C. 8 bytes
// D. 1 byte
// Your answer (A/B/C/D): a
// Wrong! Correct answer: B

// Q11: Which of these is a keyword in C?
// A. define
// B. Class
// C. return
// D. Function
// Your answer (A/B/C/D): a
// Wrong! Correct answer: C

// Q12: Which company developed the Windows OS?
// A. Apple
// B. Microsoft
// C. Google
// D. IBM
// Your answer (A/B/C/D): b
// Correct!

// Q13: Which symbol is used for comments in C?
// A. //
// B. #
// C. /* */
// D. Both A and C
// Your answer (A/B/C/D): c
// Wrong! Correct answer: D

// Q14: Which memory is volatile?
// A. ROM
// B. HDD
// C. RAM
// D. SSD
// Your answer (A/B/C/D): a
// Wrong! Correct answer: C

// Q15: Which function is used to print in C?
// A. println()
// B. echo()
// C. printf()
// D. display()
// Your answer (A/B/C/D): c
// Correct!

// Quiz Finished!
// Your Score: 10/15
// Good job!