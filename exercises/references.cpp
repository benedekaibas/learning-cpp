#include <iostream>
using namespace std;


int addition(int a, int b){
    return a + b;
}

int main(){
    int a = 321;
    int b = 10;
    const int &result = addition(a, b);

    cout << "The sum of the two numbers is: " << result << endl;
}