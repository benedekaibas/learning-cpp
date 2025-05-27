#include <iostream>
using namespace std;


class MyClass{

public:
    int val = 4;

    void show(){
      cout << "Value: " << val << endl;
    }

};

class ForConstructor{
public:
  ForConstructor(){
    int val_constructor = 5;
    cout << "Destructor method's result: " << val_constructor << endl;
  }
};

class ForDestructor{
public:
  ~ForDestructor(){
    string destructor = "This is the destructor of the class";
    cout << destructor << endl;
  }
};


int main(){
  MyClass result;
  //showing the result of the variable val
  int solution = result.val;
  cout << solution << endl;
  //showing the result of the show function inside of the MyClass class
  result.show();

  // result of the ForConstructor's class
  ForConstructor constructor;

  // result of the ForDestructor's class
  ForDestructor destructor;
}
