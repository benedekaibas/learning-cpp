#include <iostream>

int* getPointer() {
    int x = 10;
    return &x;
}

// thi is just one of the solutions
int* getPointerSolutionOne() {
  static int x = 10;
  return &x;
}

/*
   The problem is that the lifetime of x ends at the return statement, but later, because we reference it,
   we still try to use it in the main function, which leads to a dangling pointer error. We should create
   a static function or return by value to solve the problem also using dynamic allocation (new/delete) can
   resolve the dangling pointer problem.
*/

int* dynamicGetPointer() {
  int* p = new int[10];
  return p;
}

void printPointer() {
  int* storePointer = dynamicGetPointer();
  std::cout << storePointer;
  delete [] storePointer;
}

int main() {
    int* p = getPointer();
    std::cout << *p << std::endl;
    printPointer();
}

/*
   Here I showcase how to properly allocate and use pointers and delete them safely by using a dynamic memory allocation
   procedure.
*/
