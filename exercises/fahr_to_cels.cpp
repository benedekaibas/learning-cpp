#include <iostream>
using namespace std;

//19. Write a function `factorial` that calculates the factorial of a number using recursion.

int factorial(int num){
    if (num == 0){
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main(){
    int num = 8;

    int result = factorial(num);
    cout << result << endl;
}