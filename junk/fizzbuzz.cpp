#include <filesystem>
#include <iostream>
#include <vector>

int addition(){
    int a = 5, b = 10;
    return a + b;
}

int addition_param(int& a, int& b) {
    return a + b;
}

int subsitution(int a, int b) {
    int addition = addition_param(5, 7);
    return a + b - (addition);
}

int main() {
  int addition_default = addition();
  int addition = addition_param(10, 20);

  std::cout << addition_default << std::endl;
  std::cout << addition << std::endl;

  int sub = subsitution(8, 5);

  std::cout << sub << std::endl;
}
