#include <iostream>
#include <vector>

int& getRef() {
    int x = 42;
    return x;
}

int main() {
    int& r = getRef();
    std::cout << r << "\n";

    std::vector<int> v(1);
    std::cout << v[2] << "\n";

    int* p = new int[2];
    delete[] p;
    std::cout << p[0] << "\n";

    return 0;
}

