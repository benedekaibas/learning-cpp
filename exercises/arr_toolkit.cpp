#include <iostream>
#include <vector>
using namespace std;


int* arr_alloc(int *arr_ptr){
  arr_ptr = (int*) malloc(sizeof(int));
  return arr_ptr;
}

int main(){
  int arr[5] = {1,2,3,4,5};
  int *ptr = &arr[5];
  int* result = arr_alloc(ptr);

  for (int *i = 0; i < result; i++){
    cout << i;
  }
}

