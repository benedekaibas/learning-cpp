#include <iostream>
using namespace std;

void swap_nums(int &a, int &b){
    //int z = a;
    a = b;
    b = a;
}

int main() {
   int first_num = 5;
   int second_num = 6;

   swap_nums(first_num, second_num);

   cout << first_num << second_num;
}