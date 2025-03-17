#include <iostream>
using namespace std;

//20. Implement a function that returns the larger of two floating-point numbers using a return statement.

float getLargerFloat(float a, float b){
    if (a > b){
        cout << "Number a is bigger than number b ";
        return a;
    } else if (a <  b){
        cout << "Number b is bigger than number a ";
        return b;
    } else {
        cout << "Number a and b are equal." << endl;
    }
}

int main(){
    float a = 98.0;
    float b = 32.0;

    float result = getLargerFloat(a, b);
    cout << result;
}