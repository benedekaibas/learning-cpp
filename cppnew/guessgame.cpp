#include <iostream>
using namespace std;


int main(){
    string guess;
    string color = "blue";
    cout << "Enter the car's color: ";
    cin >> guess;


    while(guess != color){
        cout << "Incorrect answer!";
        cin >> guess;
    }
    cout << "Congratulations! You guessed correctly. The car's color is " << color << "." << endl;


    cin.get();
}
