#include <algorithm>
#include <iostream>

int foo() {
  int num;

  std::cout << "How many integers' sum you want to know?: ";
  std::cin >> num;
  
  int* arr = new int[num];
  
  std::cout << "Enter " << num << " integers: ";
  for(int i = 0; i < num; ++i) {

    std::cin >> arr[i];
  }

  int sum = 0;
  for(int i = 0; i < num; i++) {
    sum += arr[i];
  }
  delete[] arr;
  arr = nullptr;

  std::cout << sum;
  return 0;
}



int main() {
  foo();
}
