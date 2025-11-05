#include <iostream>

/*
   File for storing questions and answers for Core Language Fundamentals.
   I answer each question using code example and/or explanation in comments.
   To see the detailed questions, please visit the interview_questions.md file
   and look for the 1. section: Core Language Fundamentals.
*/




// What is a reference in C++? How is it different from a pointer?

/*
  A reference is an alias of an object that we have created. It has the reference to an object
  that is stored in the memory address where we created our reference from. It is practical to 
  use references, if we do not want to copy a variable. If we create a reference and modify it 
  then we also modify the object that we have referenced. A pointer is different than a reference 
  since a pointer points to the address where an object is stored. It does not point to the value 
  of the object, but to the location of that object where it is stored. 
*/

int foo() {
  int a = 10;
  int& ref = a;
  
  ref = ref * 5; // since we modified the reference a will also get modified
  return ref;
}

int foo_ptr(int* a, int* b) {
  return *a * *b; // here we are working with the acutal numbers that are on the memory address the pointer points to. We do not work with the pointers in this case, but wit the value
                  // we can just return the two pointers, but we can not multiply them since that would lead to a random memory address that is not on the stack.      
}

int main() {
  std::cout << foo() << '\n';
  int even = 10;
  int odd = 5;
  int* num1 = &even; 
  int* num2 = &odd;
  std::cout << foo_ptr(num1, num2);
}
