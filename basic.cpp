#include <iostream>
using namespace std;

/**
   Write a C++ program that takes two numbers as input and prints which one is larger, 
   or if they are equal.
 */

int main(){
    
    int number_one;
    int number_two;

    cout << "Enter a number: ";
    cin >> number_one;

    cout << "Enter another number: ";
    cin >> number_two;

    if(number_one > number_two){
        cout << "Number one is larger: " << number_one << endl;
    } else if (number_one < number_two){
        cout << "Number two is larger: " << number_two << endl;
    } else {
        cout << number_one << "and" << number_two << "are equal" << endl;
    }
    return 0;
}