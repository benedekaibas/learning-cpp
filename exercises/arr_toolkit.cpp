#include <iostream>
#include <vector>
using namespace std;


int* arr_alloc(int *arr_ptr){
  arr_ptr = (int*) malloc(sizeof(int));
  return arr_ptr;
}

void fill_array(vector<int> arr){
  for(int i = 0; i < 10; i++){
    //vector<int> new_arr = arr[i];
    vector<int> new_arr;
    for (int i : new_arr){
      new_arr.push_back(i); //this results in memory allocation issue
    }
  }
}

int main(){
  vector<int> this_arr = {};
  vector<int> ptr = this_arr;
  fill_array(ptr);

}

/*
int main(){
  int arr[5] = {1,2,3,4,5};
  int *ptr = &arr[5];
  int *result = arr_alloc(ptr);

  for (int i = 1; i < sizeof(result); i++){
    cout << i;
  }
}
*/
