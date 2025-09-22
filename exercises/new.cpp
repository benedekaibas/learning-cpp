#include <iostream>

int foo() {
  int num;

  std::cout << "How many integers' sum you want to know?: ";
  std::cin >> num;
  
  int elements_in = 0;
  int* arr = new int[num];

  std::cout << "Enter " << num << " integers: ";
  for(int i = 0; i < num; ++i) {
    std::cin >> arr[i];
    
  }
  return 0;
}



int main() {
  foo();
}
