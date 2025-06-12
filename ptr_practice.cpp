#include <iostream>

#include <vector>

std::vector<int> create_vector(std::vector<int> new_array){
  //new_array = {1,2,3,4,5,6,7,8,9};
  return new_array;
}

void buffer_vector(std::vector<int> arr){
  arr.push_back(10);

  for(int i : arr){
    std::cout << i << std::endl;
  }
}

int main(){
  std::vector<int> this_arr = {1,2,3,4,5,6,7,8,9};
  std::vector<int> arr = create_vector(this_arr);

  arr.erase(arr.begin());

  for (int i : arr){
    std::cout << i << std::endl;
  }
  std::cout << "\n";
  buffer_vector(this_arr);
}
