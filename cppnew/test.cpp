#include <iostream>
#include <list>
using namespace std;

int main(){
    int i = 0;
    list<int> numbers;

    while(i < 10){
        i++;

        if(i > 0 && i % 2 != 0){
            numbers.push_back(i);
    
    cout << "List contains: ";
    for(int num : numbers){
        cout << num;
    }
    cout << endl;
    
    }
}}