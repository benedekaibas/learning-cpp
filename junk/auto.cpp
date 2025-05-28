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
  int val = 30;
public:
  PtrUse(){
    int* ptr = &val;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;
  };
};

int main(){
  MyClass(10);
  YourClass obj;
  PtrUse obj1;
}
