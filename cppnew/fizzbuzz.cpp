#include <iostream>
using namespace std;


void fizzbuzz(){
    int start = 1;
    int end = 100;

    for(int i = start; i < end; i++){
        cout << i;

        if(i % 3 == 0){
            cout << ":fizz";
        } else if(i % 5 == 0){
            cout << ":buzz";
        } else if(i % 5 == 0 && i % 3 == 0){
            cout << ": fizz-buzz";
        } else {
            cout << i;
        };
    };
};




int main(){
    fizzbuzz();
    system("pause");
    return 0;
}