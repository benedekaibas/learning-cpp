#include <iostream>
#include <vector>
using namespace std;

//Write a C++ program that uses a for loop to calculate the sum of all even numbers between 1 and 100.

void func_loop(){
    vector<int> my_vector;
    int sum = 0;
    for (int i = 1; i < 101; i++){
        if (i % 2 == 0){
            my_vector.push_back(i);
        }
    }
    for (int number : my_vector){
        sum += number;
    }
    cout << "sum: " << sum << endl;
    cout << sizeof(my_vector) << endl;
}

int main(){
    func_loop();
}