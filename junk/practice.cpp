#include <iostream>
using namespace std;


//output of two given numbers

int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i : array){
        cout << i << endl;
    }
    //cout << array << endl;
    int* ptr = array;
    cout << ptr << endl;

    return 0;

}