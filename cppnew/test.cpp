#include <iostream>
#include <list>
using namespace std;

int main(){
    int i = 0;
    list<int> numbers;

    while(i < 10){
        i++;

        if(i > 0 && i % 2 != 0){
            numbers.push_front(i);

            cout << "These are the odd numbers: ";
            for(int num : numbers){
                cout << num << " " << endl;
            }
        } else {
            cout << "These are the even numbers: " << i;
        }
        
    }
    return 0;
}