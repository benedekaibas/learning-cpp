#include <iostream>
using namespace std;

int main(){

    cout << "The size of char is:" << sizeof(char) << " bytes" << endl;
    cout << "The size of char is:" << sizeof(short) << " bytes" << endl;
    cout << "The size of char is:" << sizeof(int) << " bytes" << endl;
    cout << "The size of char is:" << sizeof(bool) << " bytes" << endl;
    cout << "The size of char is:" << sizeof(double) << " bytes" << endl;
    cout << "The size of char is:" << sizeof(long) << " bytes" << endl;
    cout << "The size of char is:" << sizeof(long long) << " bytes" << endl;
    cout << "The size of char is:" << sizeof(float) << " bytes" << endl;
    cout << "The size of char is:" << sizeof(long double) << " bytes" << endl;


    // wait for user input before exiting the compiler     
    cin.get();
    return 0;
    
}