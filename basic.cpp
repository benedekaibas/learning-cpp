#include <iostream>
using namespace std;

void data_type(){
    int a;
    char b = 'c';
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
}


int main(){
    cout << "Hello World" << endl;
    data_type();
}