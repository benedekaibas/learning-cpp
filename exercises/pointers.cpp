#include<iostream>
using namespace std;

void swap_ptr(int *a, int *b){
    int *c = a;

    *a = *b;
    *b = *c;
}

int main(){
    int first_num = 10;
    int second_num = 20;

    int *first_ptr = &first_num;
    int *second_ptr = &second_num;

    swap_ptr(first_ptr, second_ptr);
    cout << first_num << endl;
    cout << second_num << endl;

}


