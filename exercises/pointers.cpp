#include<iostream>
using namespace std;

void swap_ptr(int *a, int  *b){
    int *c = a;

    a = b;
    b = c;
}

int main(){
    int num = 6;
    int num_two = 9;

    int *num_ptr = &num;
    int *num_two_ptr = &num_two;


    swap_ptr(num_ptr, num_two_ptr);

    cout << *num_ptr << endl;
    cout << *num_two_ptr << endl;
}
