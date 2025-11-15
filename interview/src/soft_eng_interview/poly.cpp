#include <iostream>

class Add {
public:
  void add_numbers(int a, int b)  {
    std:: cout << "Result of the function: " << a + b << "\n";
  }
  void add_numbers(double a, double b) {
    std::cout << "Results of the function: "<< a + b << "\n";
  }
};

int main() {
  Add add_class;

  add_class.add_numbers(5, 9); // 5 + 9 = 14
  add_class.add_numbers(5.5, 9.9); // 15.3
}
