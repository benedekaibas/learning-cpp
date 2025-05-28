#include <iostream>
#include <ostream>


class MyClass {
private:
    int x;
public:
    MyClass(int val) : x(val) {
      std::cout << val << std::endl;
    };
};

class YourClass{
private:
  int x = 20;
public:
  YourClass(){
    std::cout << x << std::endl;
  };
};

class PtrUse{
private:
  int* ptr;
public:
  PtrUse(){
    *ptr = 10;
    std::cout << ptr << std::endl;
  };
};

int main(){
  MyClass(10);
  YourClass obj;
  PtrUse obj1;
}
