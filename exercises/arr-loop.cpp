#include <iostream>
#include <vector>
using namespace std;

int main(){

    int uinp;
    vector<int> arr;
    char choice;


    while(true){
        cout << "Enter numbers: ";
        cin >> uinp;
        arr.push_back(uinp);

        cout << "Do you want to enter more numbers (y/n)?: " << endl;
        cin >> choice;

        if (choice == 'n' || choice == 'N'){
            break;
        }
    }

    cout << "Numbers: " << endl;
    for ( int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }

    vector<int> new_array = arr;

    for (int i = 0; i < new_array.size(); i++){
        cout << new_array[i];
    }

    cout << endl;

    return 0;
}
