# C++ Control Structures Exam (if, switch, loops

---

## Multiple Choice Questions

**Question 1:**  
Which of the following is the correct syntax for an if statement in C++?

- **A)** `if x > 10 { cout << "x is greater than 10"; }`  
- **B)** `if (x > 10) cout << "x is greater than 10";`  
- **C)** `if (x > 10) { cout << "x is greater than 10"; }`  
- **D)** `if x > 10: cout << "x is greater than 10"`

Correct is C

---

**Question 2:**  
What is the output of the following code?

```cpp
int x = 5;
switch (x) {
    case 1: cout << "One"; break;
    case 5: cout << "Five"; break;
    default: cout << "Default";
}
```

- **A)** One  
- **B)** Five  
- **C)** Default  
- **D)** No output

Correct answer is B

*(Note: The actual code snippet is not provided; answer based on the intended context.)*

---

**Question 3:**  
Which loop is guaranteed to execute at least once?

- **A)** for loop  
- **B)** while loop  
- **C)** do-while loop  
- **D)** None of the above

Correct answer is A

---

## True or False

1. The switch statement can be used with variables of type string. (True/False)  
2. The break statement is used to exit a loop or switch statement prematurely. (True/False)  
3. The continue statement skips the rest of the current loop iteration and proceeds to the next iteration. (True/False)

---

Correct answers: 

1. True
2. True
3. False

## Short Answer

1. **For Loop Printing Numbers 1 to 10:**  
   Write a for loop that prints the numbers from 1 to 10.

```cpp
int main(){
    for(int i = 1; i < 10; i++){
        cout << i << endl;
    };

    return 0;
}
```



2. **Difference Between While and Do-While Loops:**  
   Explain the difference between while and do-while loops.

---

A do-while loop is guaranteed to execute at least once while the while loop might not execute if the statement is wrong and it produce multiple outputs if the conditions are true. The do-while executes the code block first and then checks for the conditions while the while loop checks the condition first and then executes the code block.

## Code Writing

### Task 1: Number Comparison
Write a C++ program that takes two numbers as input and prints which one is larger, or if they are equal.

```cpp
int main(){
    
    int number_one;
    int number_two;

    cout << "Enter a number: ";
    cin >> number_one;

    cout << "Enter another number: ";
    cin >> number_two;

    if(number_one > number_two){
        cout << "Number one is larger: " << number_one << endl;
    } else if (number_one < number_two){
        cout << "Number two is larger: " << number_two << endl;
    } else {
        cout << number_one << "and" << number_two << "are equal" << endl;
    }
    return 0;
}
```

### Task 2: Grade Calculator
Write a C++ program that converts numerical grades to letter grades using a switch statement:

90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F

### Task 3: Sum of Even Numbers
Write a C++ program that uses a for loop to calculate the sum of all even numbers between 1 and 100.
