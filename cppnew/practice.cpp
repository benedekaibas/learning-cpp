#include <iostream>
using namespace std;


//output of two given numbers

int main(){

    int number_one;
    int number_two;
    int answer = number_one + number_two;

    cout << "Enter a number: ";
    cin >> number_one;

    cout << "Enter another number: ";
    cin >> number_two;

    cout << answer;

    cin.get();
}