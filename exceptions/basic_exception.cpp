#include <iostream>

/*
   Write a program that asks the user to input two integers, then divides the first number by the second.
   If the second number is zero, throw an exception and handle it gracefully.
*/

int input(int x, int y) {
  /*
  std::cout << "Enter an integer: " << '\n';
  std::cin >> x;

  std::cout << "Enter another integer" << '\n';
  std::cin >> y;
  */
  try {
    if (y != 0) {
      return x / y;
    }
    else {
      throw(std::runtime_error("Division by zero"));
    }
  }
  catch(int division_by_zero) {
    std::cout << "Division by zero happened";
    return division_by_zero;
  }
}

int main() {
  int x, y;
  std::cout << "Enter an integer: " << '\n';
  std::cin >> x;

  std::cout << "Enter another integer: " << '\n';
  std::cin >> y;
  std::cout << input(x, y);
}
