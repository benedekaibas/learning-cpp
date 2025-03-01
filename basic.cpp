#include <iostream>
using namespace std;

/*
void get_pointer(int* a, int* b){
    cout << a;
    cout << b;
}
*/
int main(){
    int a = 10;
    int* z = &a;
    cout << a << endl;
    cout << z;

    return 0;

}