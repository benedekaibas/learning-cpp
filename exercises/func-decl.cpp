#include <iostream>
using namespace std;

void addition(int a, int b){
    cout << a + b << endl;
}

int addition_int(int a, int b){
    return a + b;
}

float addition_float(float a, float b){
    return a + b;
}

string add_strings(string word_one, string word_two){
    return word_one + " " + word_two;
}

int main(){
    addition(3,5);
    cout << addition_int(4,5) << endl;
    cout << addition_float(4.3, 6.6) << endl;
    cout << add_strings("Hello", "World") << endl;

}