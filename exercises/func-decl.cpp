#include <iostream>
using namespace std;

int factorial(int n) {
    return n * factorial(n - 1);
}

int main() {
    cout << "Factorial of 5: " << factorial(5) << endl; // Should print 120
    return 0;
}