# Quiz_game_Using_C

# **Quiz App**

A simple multiple-choice quiz game written in **C**. This app allows users to answer multiple-choice questions, tracks the score, and displays the result at the end.

## **Features**
- **Multiple-Choice Questions:** A set of questions with four options.
- **User Interaction:** The user selects an option and the app evaluates the answer.
- **Score Tracking:** Displays the total score at the end of the game.

## **Technologies Used**
- **C programming language** for building the quiz logic.
- **Standard input/output** for interaction with the user.

## **How to Run**
1. **Clone the Repository**:
   If you haven't already, clone this repository to your local machine.

   ```bash
   git clone <repository-url>
   ```

2. **Compile the Program**:
   Open a terminal and navigate to the folder where the program is located. Compile the code using `gcc`.

   ```bash
   gcc quiz_game.c -o quiz_game
   ```

3. **Run the Program**:
   After compiling, run the program:

   ```bash
   ./quiz_game
   ```

4. **Enjoy the Game**:
   - Answer the questions as they appear.
   - At the end of the quiz, your score will be displayed.

## **Code Explanation**

The `quiz_game.c` file contains:

- **Questions Array**: 
  A list of questions with their options and the correct answer.

  ```c
  Question quiz[] = {
      {"What is the capital of France?", {"A. Berlin", "B. Madrid", "C. Paris", "D. Rome"}, 'C'},
      {"Which data structure uses LIFO?", {"A. Queue", "B. Stack", "C. Tree", "D. Graph"}, 'B'},
      ...
  };
  ```

- **Quiz Logic**:
  The user selects an option (A, B, C, or D), and the program checks if the answer is correct. The score is updated accordingly.

- **Score Tracking**: 
  The total score is calculated based on correct answers and displayed after the quiz.

## **Structure of the Program**
1. **Question Structure**: 
   The `Question` struct stores the question, the four options, and the correct answer.
   
   ```c
   typedef struct {
       char question[100];
       char options[4][50];
       char answer;
   } Question;
   ```

2. **Main Logic**:
   - The game runs in a loop through each question, asking the user for their input.
   - The `sizeof(quiz) / sizeof(quiz[0])` formula determines the number of questions in the array.

## **Sample Output**

```bash
What is the capital of France?
A. Berlin
B. Madrid
C. Paris
D. Rome
Enter your choice: C
Correct!

What is the output of 5 * 6?
A. 30
B. 36
C. 56
D. 26
Enter your choice: A
Correct!

Total Score: 2/2
```

## **Contribution**

Feel free to fork this project, submit issues, and contribute. Improvements and suggestions are welcome!

## **License**

This project is open source and available under the MIT License.


Here is My Output --
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

