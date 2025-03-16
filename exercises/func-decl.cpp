#include <iostream>
using namespace std;

void num(int &a){
    a += 5;
}

int main(){
    int b = 7;
    num(b);
    cout << b;
}