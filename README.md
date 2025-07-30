# Loops in C++

## AIM  
To explore the use of `for`, `while`, and `do while` loops in C++ for automating repetitive tasks, implementing algorithms, and optimizing control flow in applications.

## THEORY

Loops in C++ are control flow structures that allow repeated execution of a block of code. They are fundamental in programming for:

- Automating repetitive tasks  
- Iterating over data structures  
- Implementing algorithms efficiently  
- Enhancing code modularity and readability  

## Types of Loops in C++

### 1. **For Loop**
Used when the number of iterations is known beforehand.  
Combines initialization, condition check, and increment or decrement in a single line.  
Ideal for counting loops, array traversal, and fixed iteration tasks.

### 2. **While Loop**
Used when the number of iterations is unknown.  
Condition is checked before each iteration.  
Suitable for condition-driven logic such as waiting for user input or sensor data.

### 3. **Do While Loop**
Executes the loop body at least once before checking the condition.  
Useful in scenarios like menu-driven programs or input validation where the loop must run at least once.

## Loop Control Statements

### **Break**
Terminates the loop immediately when a specific condition is met.  
Commonly used in search operations or early exits.

### **Continue**
Skips the current iteration and proceeds to the next.  
Helps avoid deeply nested conditions and improves clarity.

## Nested Loops

Nested loops are loops placed inside other loops. They are essential for:

- Generating patterns such as triangles or grids  
- Traversing multi-dimensional arrays or matrices  
- Creating structured outputs like multiplication tables  

In nested loops, the inner loop completes its full cycle for each iteration of the outer loop.

## Algorithm

### Print Even Numbers from 1 to 10

1. **Start**  
2. Initialize an integer variable `i` to 1  
3. Repeat steps 4-5 while `i` is less than or equal to 10  
4. Check if `i % 2 == 0`  
   - If true → Display the value of `i`  
5. Increment `i` by 1  
6. **End**

### Password Validation System

1. **Start**
2. Declare a constant string variable `password` which holds the correct password (`"BCD9QTTU"`).
3. Initialize a variable `user_password` to store the entered password.
4. Initialize an integer `attempts` to keep track of the number of login attempts, and set a constant `max_attempts` to 3.
5. Start a loop that runs while the number of attempts is less than `max_attempts`:
   - Prompt the user to enter a password.
   - Hide the entered characters and display '*' for each character typed by the user using `_getch()`.
   - If the user presses backspace, remove the last entered character.
6. Check if the entered password matches the predefined password:
   - If true → Display "System is Unlocked" and exit.
   - If false → Increment the number of attempts and display the remaining attempts.
7. If the user exceeds the maximum allowed attempts, display "System is locked."
8. **End**


## CONCLUSION

Loops are a cornerstone of C++ programming, enabling efficient repetition, algorithmic logic, and structured control flow. Understanding the differences between `for`, `while`, and `do while` loops along with control statements and optimization techniques empowers developers to write clean, scalable, and high-performance code. Mastery of loops is essential for solving real-world problems, from pattern generation to complex algorithmic tasks.
