#include <iostream>
using namespace std;

//18. Implement a function `isEven` that takes an integer and returns `true` if it is even and `false` otherwise.


bool isEven(int num){

    if (num % 2 == 0){
        return true;
    } else if (num % 2 != 0){
        return false;
    } else {
        return "The number you enter is not an integer";
    }
}

int main(){
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    bool result = isEven(num);

    cout << "The number you have entered is the following: " << result << endl;
}