#include <iostream>
using namespace std;

int main(){

    int user_input;
    cout << "Enter a whole number: ";
    cin >> user_input;

    float sum;


    sum = user_input * (user_input + 1) / 2;

    cout << "the sum is" << sum << endl;

    cin.get();
}