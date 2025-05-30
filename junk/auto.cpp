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

class Vector{
public:
  Vector(int s):elem{new double[s]}, sz{s}{};
  double& operator[](int i){return elem[i];}
  int size(){return sz;}
private:
  double* elem;
  int sz;
  };

int main(){
  MyClass(10);
  YourClass obj;
  PtrUse obj1;
  Vector v(6);
}
