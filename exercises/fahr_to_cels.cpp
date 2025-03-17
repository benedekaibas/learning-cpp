#include <iostream>
using namespace std;

float dot_product(float a[], float b[], int n) {
    float result = 0.0;
    for (int i = 0; i < n; i++) {
        result += a[i] * b[i]; // Manual element-wise multiplication and summation
    }
    return result;
}

int main(){
    float a[] = {1.0, 2.0, 3.0};
    float b[] = {4.0, 5.0, 6.0};
    int n = 3;

    float result = dot_product(a, b, n);
    cout << result;
}