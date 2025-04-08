#include <iostream>
using namespace std;

/*
Write a function sumArray that calculates 
the sum of all elements in an array using pointers.
*/

void sum_array(int *arr, int size){
    int this_arr[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i : this_arr){
        sum += i;
    }
    cout << sum;
}

int main(){
    int my_array[5] = {1,2,3,4,5};
    int *ptr = &my_array[5];

    sum_array(ptr, 5);
}