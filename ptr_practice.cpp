#include <iostream>

#include <vector>
using namespace std;


vector<int> create_vector(vector<int> new_array){
  //new_array = {1,2,3,4,5,6,7,8,9};
  return new_array;
}

int main(){
  vector<int> this_arr = {1,2,3,4,5,6,7,8,9};
  vector<int> arr = create_vector(this_arr);

  arr.erase(arr.begin(), 2);

  for (int i : arr){
    cout << i;
  }
}
