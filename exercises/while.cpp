#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){

    int user_inp;
    char choice;
    vector<int> arr;

    cout << "Enter a numbers, type n for stop" << endl;

    while(true){
        cout << "Enter a number: " << endl;
        cin >> user_inp;
        arr.push_back(user_inp);

        cout << "Do you want to enter more numbers? y/n: " << endl;
        cin >> choice;

        if (choice == 'n' || choice == 'N'){
            break;
        }
    }

    cout << "You entered: ";
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
    //cin.get();
}