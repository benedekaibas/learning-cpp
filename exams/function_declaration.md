# C++ Exam: Functions (Declaration, Definition, Parameters, Return Values)

## Instructions
- Answer all questions.
- Show all necessary work for coding questions.
- Code must be properly formatted and syntactically correct.

---

## Section 1: Multiple Choice (2 points each)

1. Which of the following correctly declares a function in C++?
   
   a) `void func();`
   
   b) `func();`
   
   c) `void func {}`
   
   d) `function void func();`

   Correct answer is a

2. What is the default return type of a function if none is specified?
   
   a) `int`
   
   b) `void`
   
   c) `double`
   
   d) Compiler error

Correct answer is a

3. What is the correct way to pass a variable by reference?
   
   a) `void func(int x);`
   
   b) `void func(int& x);`
   
   c) `void func(*x);`
   
   d) `void func(int x&);`

   Correct answer is b

4. What happens if a function does not return a value but has a non-void return type?
   
   a) Compilation error
   
   b) Undefined behavior
   
   c) The function returns 0 automatically
   
   d) The function executes normally but returns garbage data

   Undefined behavior is the correct answer

----

## Section 2: True/False (2 points each)

5. A function definition must always match its declaration. true

6. A function can have multiple return statements. true

7. A function in C++ can return an array. false

8. A function must have at least one parameter. false

9. A function can return a pointer to a local variable safely. false

10. A function prototype must always be placed before `main()`. false

---

## Section 3: Short Answer (5 points each)

11. Explain the difference between function declaration and function definition in C++.

A function declaration is how a function created for example `int add_numbers(int a, int b){}` is a function declaration. The definition of a function is that they are objects that can store return expressions that we can use later in our code.

12. What is function overloading? Provide an example.

C++ allows to create multiple function with the same name until their parameters are different.

```cpp
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}
```

13. What are default parameters in functions? Provide an example.

Parameters are passed into the function call like `int add_numbers(int a, int b)`.  

14. Explain the concept of inline functions. When should they be used?

15. Describe how functions can return multiple values using references or pointers.

```cpp
void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}
```

This is a great example of how we can use references to return multiple values in a single function.

---

## Section 4: Coding Questions (10 points each)

16. Write a function declaration and definition for a function named `sum` that takes two integers as parameters and returns their sum.

```cpp
int addition(int a, int b){
    return a + b;
}

int main(){
    int a = 321;
    int b = 10;
    int result = addition(a, b);

    cout << "The sum of the two numbers is: " << result << endl;
}
```

17. Write a function `swapValues` that swaps two integer values using pass-by-reference.

```cpp
void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int first_num = 10;
    int second_num = 19;

    cout << "The original first and second numbers are: " << first_num << " " << second_num << endl;

    swap(first_num, second_num);
    cout << "The swapped numbers are: " << first_num << " " << second_num << endl;
}
```

18. Implement a function `isEven` that takes an integer and returns `true` if it is even and `false` otherwise.

```cpp
bool isEven(int num){

    if (num % 2 == 0){
        return true;
    } else if (num % 2 != 0){
        return false;
    } else {
        return "The number you enter is not an integer";
    }
}

int main(){
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    bool result = isEven(num);

    cout << "The number you have entered is: " << num << endl;
    cout << num << " is an even integer (1-yes, 0-false): " << result << endl;
}
```

19. Write a function `factorial` that calculates the factorial of a number using recursion.

```cpp
int factorial(int num){
    if (num == 0){
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main(){
    int num = 8;

    int result = factorial(num);
    cout << result << endl;
}
```

20. Implement a function that returns the larger of two floating-point numbers using a return statement.

```cpp
float getLargerFloat(float a, float b){
    if (a > b){
        cout << "Number a is bigger than number b ";
        return a;
    } else if (a <  b){
        cout << "Number b is bigger than number a ";
        return b;
    } else {
        return a = b;;
    }
}

int main(){
    float a = 98.0;
    float b = 32.0;

    float result = getLargerFloat(a, b);
    cout << result << endl;
}
```