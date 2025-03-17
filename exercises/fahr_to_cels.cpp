#include <iostream>
using namespace std;

//17. Write a function `swapValues` that swaps two integer values using pass-by-reference.

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int first_num = 10;
    int second_num = 19;

    cout << "The original first and second numbers are: " << first_num << " " << second_num << endl;

    swap(first_num, second_num);
    cout << "The swapped numbers are: " << first_num << " " << second_num << endl;
}