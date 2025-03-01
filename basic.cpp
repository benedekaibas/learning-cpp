#include <iostream>
using namespace std;

/**
   Write a for loop that prints the numbers from 1 to 10.
 */

int main(){
    int i = 0;

    while (i < 10){
        cout << i++ << endl;
    }

    for (int x = 0; x < 10; x++){
        cout << "This is the iteration: "<< x << endl;
        int* z = &x;
        cout << "This is the pointer's pointing to the variable: " << &z;
    }

    return 0;


}