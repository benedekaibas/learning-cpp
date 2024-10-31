/*
Title: Find the Second Smallest Element in an Array using Functions
Description: Write a program that asks the user to enter an array of 
integers and finds the second smallest element in the array using a function.
*/

#include <iostream>
#include <vector>

using namespace std;

void user_input(vector<int> &user_array){
    // vector<int> user_array;
    int number;
    cout << "Enter integer numbers: ";

    while(cin >> number){
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