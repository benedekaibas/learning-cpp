#include <iostream>

void add(int* x) {
  *x += 5;
  std::cout << *x;
}
int main() {
  int num = 3;
  int* y = &num;
  add(y);
}

