/*
Write a simple calculator in c++
*/

#include <iostream>
using namespace std;


int main(){
    cout << "Hello User!" << "\n";


    float a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    string operand;
    cout << "Enter an operand that you would like to do: ";
    cin >> operand;
    if (operand == "+"){
        cout << "result:" << a + b;
    } else if (operand == "-"){
        cout << "result" << a - b;
    } else if (operand == "/"){
        cout << "result"  << a / b;
    } else if (operand == "*"){
        cout << "result" << a * b;
    }else {
        cout << "You did not enter anything or not an operand";
    };


    cin.ignore();
    return 0;
};