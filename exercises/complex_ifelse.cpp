#include <iostream>
using namespace std;

int main(){
    int income;
    int tax;

    cout << "Enter your income: ";
    cin >> income;

    if(income <= 9875){
        tax = income * 0.10;
        cout << "Your income tax is " << tax << "*" << "10%" << "=" << tax;
    } else if (income >= 9876 && income <= 40125){
        tax = income * 0.12;
        cout << "Your income tax is " << tax << "*" << "12%" << "=" << tax;
    } else if (income >= 40126 && income <= 85526){
        tax = income * 0.22;
        cout << "Your income tax is " << income << "*" << "22%" << "=" << tax;
    } else {
        cout << "Your input is incorrect!";
    }
}