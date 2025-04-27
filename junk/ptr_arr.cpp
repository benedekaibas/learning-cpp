#include <iostream>
using namespace std;

/*
Write a function sumArray that calculates 
the sum of all elements in an array using pointers.
*/

void sum_array(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Accessing elements through the pointer
    }
    cout << "Sum: " << sum << endl;
}

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};
    int *ptr = &my_array[5]; // BUG: Pointer points past the end of the array

    sum_array(ptr, 5); // Passing an invalid pointer
    return 0;
}