#include <iostream>
using namespace std;


int main(){
    cout << "Hello User!" << "\n";


    // TODO: Make this better and work.
    float a = 7;
    float b = 7;

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

return 0;
};