#include<iostream>
using namespace std;

int main(){
    string name = "Benedek";
    string *ptr = &name;

    cout << name << endl;
    cout << ptr << endl;
}