#include <iostream>
#include <vector>
using namespace std;

//Write a C++ program that uses a for loop to calculate the sum of all even numbers between 1 and 100.

void pass_array(int my_array[5]){
    for (int i = 0; i < 5; i++){
        cout << my_array[i];
    }
}

int main(){
    int my_numbers[5] = {1,2,3,4,5};
    pass_array(my_numbers);
}