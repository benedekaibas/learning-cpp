#include <iostream>
#include <vector>

void SomeArray() {
  std::vector<int> v1 = {1,2,3,4,5};
  std::vector<int> v2 = {6,7,8,9,10};
  std::vector<int> merged;

  for(int i: v1) {
    merged[i++];
  }
  for(int y: merged) {
    std::cout << y;
  }
}

int main() {
  SomeArray();
}
