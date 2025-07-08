#include <iostream>

/*
   File containing practice problems for abstraction and encapsulation.
*/

class SumNumbers {
private:
  int a,b,c;

public:
  void SumOutput(int x, int y){
    x = a;
    y = b;
    c = x + y;

    std::cout << "Output for abstraction: " << c << std::endl;
  }
};

int main(){
  SumNumbers obj;
  obj.SumOutput(9,10);
}
