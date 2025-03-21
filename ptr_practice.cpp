#include <iostream>
#include <vector>
using namespace std;

/*
Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively. 
There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively,
and display them.
*/

int user_input(int usr_ip_one, int usr_ip_two){
    cout << "Enter an integer: " << endl;
    cin >> usr_ip_one;

    cout << "Enter another integer: " << endl;
    cin >> usr_ip_two;

    return usr_ip_one, usr_ip_two;
}

int input_ptr(int *ptrA, int *ptrB){
    
}