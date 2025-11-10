#include <iostream>

/*
   File for storing questions and answers for Core Language Fundamentals.
   I answer each question using code example and/or explanation in comments.
   To see the detailed questions, please visit the interview_questions.md file
   and look for the 1. section: Core Language Fundamentals.
*/

// What are namespaces and why are they useful?

namespace HelloWorld {
  void output() {
    std::cout << "Hello World" << "\n";
  }
}


using namespace HelloWorld;
void ReturnOutput() {
  output();
}



int main() {
  HelloWorld::output();
}

/*
   Namespaces are useful to wrap related classes, functions, structs into a name and later on call that specific namespace.
   It helps to prevent name conflicts and also good for logically organizing our code. By organizing functions that have
   the same logic behind them into a namespace we can avoid name conflicts and logically our code is better presented.
*/
