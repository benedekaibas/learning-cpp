#include <iostream>

struct SizeOf {
  int students;
  int average;
  double heightOfStudent;
};

int main() {
  std::cout << sizeof(double) << "\n";
  std::cout << sizeof(int) << "\n";
  std::cout << sizeof(SizeOf) << "\n";
}

/*
   Interesting to see how the size of the struct changes when we change the double variable's place in the struct.
*/
