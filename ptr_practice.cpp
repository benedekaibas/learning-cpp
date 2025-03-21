#include <iostream>
#include <vector>
using namespace std;

int find_max(vector <int> arr){
    for (int i = 1; i < arr.size(); i++){
        if(i > arr[0]){
            return arr[i];
        }
    }
}

int main(){
    vector<int> this_arr = {1,2,3,4,5,6,7};
    int result = find_max(this_arr);
    cout << result;

    return 0;
}