#include <iostream>

int main() {
    int* arr = new int[3];
    for (int i = 0; i <= 3; i++) {
        arr[i] = i * 10;
    }
    std::cout << arr[3] << "\n";
    delete[] arr;
    return 0;
}
/*
   since we are indexing from 0 in c++ the index of 3 is out of the array.
*/

