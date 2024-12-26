/*
Write a simple calculator in c++
*/

#include <iostream>
#include <string>
using namespace std;

int add(int number_one, int number_two);
int substract(int number_one, int number_two);
int multiply(int number_one, int number_two);
int divide(int number_one, int number_two);

int add(int number_one, int number_two){
    return number_one + number_two;
};

int substract(int number_one, int number_two){
    return number_one - number_two;
};

int multiply(int number_one, int number_two){
    return number_one * number_two;
};

int divide(int number_one, int number_two){

    if (number_two == 0){
        throw invalid_argument("Can't divide with zero.");
    }
    return number_one / number_two;
};

int main(){
    int number_one, number_two;
    string operand;

    cout << "Enter the first number: ";
    cin >> number_one;

    cout << "Enter the second number: ";
    cin >> number_two;

    cout << "Enter an operand (+, -, *, /): ";
    cin >> operand;

    try{
        if (operand == "+"){
            cout << "Result: " << add(number_one, number_two);
        } else if (operand == "-"){
            cout << "Result: " << substract(number_one, number_two);
        } else if (operand == "*"){
            cout << "Result: " << multiply(number_one, number_two);
        } else if (operand == "/"){
            cout << "Result: " << divide(number_one, number_two);
        }
    } catch (const invalid_argument &e){
        cout << e.what() << endl;    
        }
    }
