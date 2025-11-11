#include <iostream>
#include <thread>

void addition(int input) {
  while(true){};
}

int substraction() {
  std::cout << "Second thread.";
  return 5 - 3;
}

int main() {
  std::thread first(addition, 5);
  std::thread second(substraction);

  first.join();
  second.join();
}
