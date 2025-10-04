#include <iostream>
#include <string>

const std::string getName(){
    std::string name = "Alice";
    return name;
}

int main() {
    const std::string& ref = getName();
    std::cout << "Name: " << ref << "\n";
    return 0;
}

