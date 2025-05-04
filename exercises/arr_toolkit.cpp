#include <iostream>
#include <vector>
using namespace std;


int* arr_alloc(int *arr_ptr){
  arr_ptr = (int*) malloc(sizeof(int));
  return arr_ptr;
}

void fill_array(vector<int> &arr, int *i){
  arr.push_back(*i);
}

int main(){
  vector<int> simple_arr = {1,2,3,4,5,6};
  vector<int> *arr = &simple_arr;
  int counter = 0;
  int *i = &counter;
  fill_array(vector<int> arr, *i);
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
