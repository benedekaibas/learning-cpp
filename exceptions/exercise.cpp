#include <iostream>

double divide(double& numerator, double& denominator) {
  try {
    if (denominator == 0) {
      throw -1;
    }
    return numerator / denominator;

  } catch(int num_exception) {
    std::cout << "Cannot divide by " << denominator;
    
  }
  return 0;
}

double positiveNumber(double& usr_input) {
  try {
    if (usr_input == 0 || usr_input < 0) {
      throw 0;
    }
    return usr_input;

  } catch(int exceptionError) {
    std::cout << exceptionError << " is less than or equal to zero!";
  }
  return 0;
}
int main() {
  double x = 10;
  double y = 0;
  std::cout << divide(x, y) << "\n";
  
  double input;
  std::cout << "Enter a double number: ";
  std::cin >> input;

  std::cout << positiveNumber(input);
}
