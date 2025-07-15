#include <iostream>

/*
   File containing practice problems for abstraction and encapsulation.
*/

class SumNumbers {
private:
  int a,b,c;

public:
  void SumOutput(int x, int y){
    a = x;
    b = y;
    c = a + b;

    std::cout << "Output for abstraction: " << c << std::endl;
  }
};

class AddNumbers {

private:
  int x;

public:
  AddNumbers(int x){
    std::cout << x * x << std::endl;
  }
};

int main(){
  SumNumbers obj;
  obj.SumOutput(9,10);

  AddNumbers(10);
}
