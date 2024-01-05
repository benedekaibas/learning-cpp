#include <iostream>
using namespace std;

double square_s2(double s2){
    return s2 * s2;
}

void print_s2(double s2){
    cout << "s2 squared gives the result " << s2 << endl;
}

int main(){
    print_s2(2);
}
