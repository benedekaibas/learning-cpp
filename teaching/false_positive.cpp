#include <iostream>

// in this function members are not initialized
int uninitialized_member() {
  int arr[2];
  auto [x, y] = arr;
  int p = x;
  return p;
}

int initialized_member() {
  int arr[2] = {1,2};
  auto [x, y] = arr;
  int p = x;
  return p;
}
int main() {
  std::cout << initialized_member();
}
