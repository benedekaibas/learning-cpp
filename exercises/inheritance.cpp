#include <iostream>

class ptr_use{

public:
  int num = 10;
  int* num_ptr = &num;
};

class ref_use{

public:
  int num = 20;
  int& ref_num = num;

};

class get_ptr: public ptr_use, public ref_use{
public:
  void print_ptr(){
    std::cout << num_ptr;
  }
  void print_ref(){
    std::cout << ref_num;
  }
};


int main(){
  get_ptr ptr_obj1;

  std::cout << "Output from the derived class" << std::endl;
  ptr_obj1.print_ptr();

  std::cout << "\n";

  std::cout << "Output from the base class" << std::endl;
  std::cout << ptr_obj1.num_ptr << std::endl;

  std::cout << "Output from another derived class" << std::endl;
  ptr_obj1.print_ref();
  std::cout << "\n";
}
