#include <iostream>
#include <vector>
using namespace std;

//Write a C++ program that uses a for loop to calculate the sum of all even numbers between 1 and 100.

int ptr_func(int *a, int *b){
    return *a * *b;
}

int main(){
    int a = 9;
    int b = 10;

    int *ptr_a = &a;
    int *ptr_b = &b;

    int prod = ptr_func(ptr_a, ptr_b);
    cout << prod;
}