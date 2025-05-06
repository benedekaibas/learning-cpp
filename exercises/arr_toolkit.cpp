#include <iostream>
#include <vector>
using namespace std;


int* arr_alloc(int *arr_ptr){
  arr_ptr = (int*) malloc(sizeof(int));
  return arr_ptr;
}

void fill_array(vector<int> *arr){
  for (int i = 0; i < 10; i++){
    for(int i : *arr){
      cout << i * 2;
    }
  }
  cout << arr;
}

int main(){
  vector<int> this_arr[10] = {};
  vector<int> *ptr = &this_arr[10];
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
