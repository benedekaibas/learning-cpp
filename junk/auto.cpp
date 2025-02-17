#include <iostream>
using namespace std;

int main(){

  int a = 5;
  int b = 9;

  cout << "A is: " << a << "B is: " << b << endl;

  a = b;
  b = a;

  cout << "A is: " << a << "B is: " << b << endl;  

  return 0;
}

