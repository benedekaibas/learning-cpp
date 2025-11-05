#include <iostream>

/*
   File for storing questions and answers for Core Language Fundamentals.
   I answer each question using code example and/or explanation in comments.
   To see the detailed questions, please visit the interview_questions.md file
   and look for the 1. section: Core Language Fundamentals.
*/

// What is the difference between int a = 5; and int a(5);

void foo() {
  int a = 5;
  int b(5); // I named it b instead of a, so there is no error. 
  // int a = 5; is an integer variable storing the value of 5 copy initialization
  // int a(5); is an integer variable also storing a value, but using direct initialization
}

// What is a reference in C++? How is it different from a pointer?

/*
  A reference is an alias of an object that we have created. It has the reference to an object
  that is stored in the memory address where we created our reference from. It is practical to 
  use references, if we do not want to copy a variable. If we create a reference and modify it 
  then we also modify the object that we have referenced. A pointer is different than a reference 
  since a pointer points to the address where an object is stored. It does not point to the value 
  of the object, but to the location of that object where it is stored. 
*/

int boo() {
  int a = 10;
  int& ref = a;
  
  ref = ref * 5; // since we modified the reference a will also get modified
  return ref;
}


