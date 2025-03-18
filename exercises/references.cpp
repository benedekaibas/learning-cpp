#include <iostream>
using namespace std;


int addition(int a, int b){
    return a + b;
}

int formula(int c, int d){
    const int &ref = addition(9, 8);
    
    return (c + d) - ref;
}

int main(){
    int result = formula(9,8);

    cout << result;

    int sum = 20;
    int &ref = sum;
    cout << ref;
}