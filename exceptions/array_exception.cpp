#include <iostream>

/*
   Define an array of 5 integers (e.g., {10, 20, 30, 40, 50}).
  Prompt the user to input an index.
  If the index is within bounds, print the element.
  If the index is out of range, throw a std::out_of_range exception.
  Catch the exception and print an error message.
*/

int arr() {
  int t[] = {10, 20, 30, 40, 50};
  int idx;

  try {
    std::cout << "Enter an index: ";
    std::cin >> idx;

    }

  } catch (declaration) {

  }

}

int main() {
  std::cout << arr() << '\n';
}
