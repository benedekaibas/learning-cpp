#include <iostream>
#include <string>

const std::string getValue() { // lifetime of a const & is not implemented in a correct way
    std::string s = "Hello";    // the const s variable's lifetime is done after the return statement
    std::string& refTo = s;
    return refTo;                   // so referencing after that would lead to lifetime errors.
}

int main() {
    std::string ref = getValue();
    std::cout << ref << "\n";
    return 0;
}
