#include <iostream>
#include <vector>

int isNegative(){
  int i = 9;
  return i;
}

int findIf(int func, std::vector<int> array) {
  for(int i: array) {
    if(i < 0){
      return func;
    }
  }
  return -1;
}



int main() {
  std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

  std::cout << findIf(isNegative(), arr);
}
