/*
Title: Find the Second Smallest Element in an Array using Functions
Description: Write a program that asks the user to enter an array of 
integers and finds the second smallest element in the array using a function.
*/

#include <iostream>
#include <vector>
using namespace std;

void user_input(){
    int user_array = {};
    cout << "Enter an array of integers: ";
    cin >> user_array;

    cout << "The array you have entered is the following: " << user_array;

}


int main(){
    user_input();
    return 0;
}