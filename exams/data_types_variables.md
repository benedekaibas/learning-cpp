# C++ Variables and Data Types Exam

## Multiple Choice Questions

1. **Which of the following is the correct way to declare an integer variable in C++?**  
   A) `int integer_value = 4;`  
   B) `integer int_value = 4;`  
   C) `integer_value int = 4;`  
   D) `int_value integer = 4;`

   Answer A is the correct answer since in c++ you have to declare the type of the variable before
   its name. In this case, it is an integer value since 4 is an integer. Integers` size is either 2 or 4 bytes.

2. **What is the correct data type for a variable that stores a single character?**  
   A) `char`  
   B) `string`  
   C) `bool`  
   D) `int`

   A is the correct answer since char is used for storing single character and its size is 1 byte.

3. **Which of the following is a valid boolean value in C++?**  
   A) `yes`  
   B) `no`  
   C) `true`  
   D) `1`

   Answer C is the correct. Boolean value has a size of 1 byte and its value is either true or false.

---

## True or False

1. The `double` data type is used to store floating-point numbers. (**True/False**)

It is true.

2. The `string` data type can store multiple characters. (**True/False**)

It is true since we use string to store one or more characters unlike char that is only used for
storing a single character.

3. The `char` data type can store more than one character. (**True/False**)

It is false since a char data type can only store a single character like 'A'.
We have to use single '' if we store char.

---

## Short Answer

1. **Write a line of code to declare a variable named `double_value` of type `double` and initialize it with the value `87.43`.**

```cpp
int main(){
   double double_value = 87.43;
   cout << double_value;

   return 0;
};
```

2. **How do you print the value of a variable named `integer_value` to the console in C++?**

```cpp
int main(){
   int integer_value = 99;
   cout << integer_value
   return 0;
};
```

## Code Writing

### Task:

- Write a C++ program that declares the following variables and prints their values:

- An integer variable named integer_value with a value of 10
- A boolean variable named boolean_value with a value of false
- A string variable named string_value with a value of "Hello"
- A character variable named char_value with a value of 'H'
- A double variable named double_value with a value of 99.99

```cpp
#include <iostream>
using namespace std;

int main(){

   int integer_value = 10;
   bool boolean_value = false;
   string string_value = "Hello";
   char char_value = 'H';
   double double_value = 99.99;

   cout << "Integer: " << integer_value;
   // we do this with all the variables

   return 0;
}
```
