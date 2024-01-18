#include <iostream>
using namespace std;

int main(){
    string name;
    name = "Benedek Kaibas";
    cout << name;
    int newName;
    newName = 321;
    long a;
    a = 123;
    long long b;
    b = 984324;
    int c;
    c = 43;
    cout << "Size of name " << sizeof(name) << endl;
    cout << "Size of long a " << sizeof(a) << endl;
    cout << "Size of long long b " << sizeof(b) << endl;
    cout << "Size of int c " << sizeof(c) << endl;

    //TODO: make this more readable
    if (a >= newName ){
        cout << "Size of long a " << sizeof(a) << endl;
    } else{
        cout << "not working";
    }

}