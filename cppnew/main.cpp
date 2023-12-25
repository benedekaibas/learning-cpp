#include <iostream>
using namespace std;


int main(){
    cout << "Hello User!" << "\n";


    // TODO: Make this better and work.
    float a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    string operand;
    cout << "Enter an operand that you would like to do: ";
    cin >> operand;
    cout << operand;
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

    //comment cin.get() out and see if code works without it 
    //cin.get();
    // try cin.ignore()
    cin.ignore();
    return 0;
};