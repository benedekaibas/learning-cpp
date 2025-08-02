#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "enter a integer: " << std::endl;
    std::cin >> n;

    if(n.eof()) {
        std::cout << "Not an integer number";
    }
}
