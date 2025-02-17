#include <iostream>
#include <array>
#include <span>
#include <string>
using namespace std;

array <int, 5> MyArray(){
  return {1,2,3,4,5};
};

int main(){

  array<int, 5> new_array = MyArray();

  //cout << (arr[0]) << endl;

  cout << new_array.back() << endl;

  /*
   for (int i : new_array){
    cout << new_array.back(i) << endl;
  } 
  */

  return 0;
}

