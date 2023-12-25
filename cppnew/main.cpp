#include <iostream>
using namespace std;


int main(){
    cout << "Hello User!";


    // TODO: Make this better and work.
    // The concept has to stay the same 
    float a = 7;
    float b = 7;
    string operand;
    cout << "Enter an operand that you would like to do: ";
    cin >> operand;
    
    if (operand == "+"){
        cout << a + b;
    } else if (operand == "-"){
        cout << a - b;
    } else if (operand == "/"){
        cout << a / b;
    } else if (operand == "*"){
        cout << a * b;
    }else {
        cout << "You did not enter anything or not an operand";
    };

    cin.get();
};