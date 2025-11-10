#include <iostream>

/*
   File for storing questions and answers for Core Language Fundamentals.
   I answer each question using code example and/or explanation in comments.
   To see the detailed questions, please visit the interview_questions.md file
   and look for the 1. section: Core Language Fundamentals.
*/

// What does the keyword `const` mean?
 

/*
   The const keyword means that the value of the variable or the function that we declare as const (constant)
   cannot be changed after the initialization. So, basically that variable has a constant value. It is important to
   use const when we are working with variables that we know will have the same value in the entire code. Const
   can also apply to pointers, function parameters, and member functions.
*/

void a() {
  int x = 10;
  const int y = 20;
  x = 15; // modifying x is possible since it's not a const variable
  y = 25; // y got initialized to 20 and that cannot be changed after initialization; ERROR
}

void b(){
  int a = 5, b = 10;
  const int* p1 = &a; // Pointer that points to a const integer. Here we can change the pointer 
  int* const p2 = &a; // A const int pointer where the pointer is a const. Here we can change the value
}

// Which of these can change the value being pointed to, and which can change where it points?

/*
   If we have a pointer that points to a const integer then we can change the pointer where it points, but not the value since it is a const
   value. In the other case, where the pointer is a const integer we cannot change the pointer where it points, but we can change the value 
   in that memory address since that is not a const int. If we declare the value as well as const then we cannot change the value either.
*/
