#include <iostream>
using namespace std;
#include <vector>

//output of two given numbers

int main(){
    vector<int> this_arr;
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i : array){
        if ( i % 2 == 0){
            this_arr.push_back(i);
    }
    cout << "Elements in the new array: ";
    for (int i : this_arr){
        cout << i << " ";
    }

    int* ptr = array;
    cout << ptr << endl;

    return 0;

}}