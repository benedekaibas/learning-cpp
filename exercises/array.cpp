/*
Title: Find the Second Smallest Element in an Array using Functions
Description: Write a program that asks the user to enter an array of 
integers and finds the second smallest element in the array using a function.

g++ -std=c++14 -o array array.cpp

*/

#include <iostream>
#include <vector>

using namespace std;

void user_input(vector<int> &user_array){
    // vector<int> user_array;
    int number;    
    cout << "Enter integers";

    while(cin >> number && user_array.size() < 10){
        cout << "Enter integers";
        user_array.push_back(number);
    }

    cout << "The array you have entered is the following: ";
    for (int num : user_array){
        cout << num << " ";
    }
    cout << endl;
}


int main(){
    vector<int> user_array;
    user_input(user_array);
    return 0;
}