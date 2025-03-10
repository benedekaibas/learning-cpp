#include <iostream>
#include <vector>
using namespace std;

// Output of two given numbers

int main() {
    vector<int> this_arr;
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Add even numbers to the vector
    for (int i : array) {
        if (i % 2 == 0) {
            this_arr.push_back(i);
        }
    }

    // Print the elements of the vector
    cout << "Elements in the new array: ";
    for (int i : this_arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}