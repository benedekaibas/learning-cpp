#include <iostream>
#include <array>
#include <span>
#include <string>
using namespace std;

int main(){

  int arr[5] = {1,2,3,4,5};

  cout << (arr[0]) << endl;

  for (int i : arr){
    cout << -i << endl;
  }

  return 0;
}

