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






