#include <iostream>
#include <vector>

std::vector<int> vec(std::vector<int> vec_int) {
  if (sizeof(vec_int) == 0) {
    std::cout << "Vector could not been found!";
  }

  for(int i: vec_int) {
    std::cout << i;
  }

  if(sizeof(vec_int) != 0) {
    return vec_int;
  }
}

std::vector<int> ints = {1,2,3,4,5,6,7,8,9,10};
vec(ints);

int main() {
  std::cout << "Only functions in main get executed in C++ or if they get called in a function that is executed in the main function!";
}
