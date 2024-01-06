#include <iostream>
using namespace std;


int main(){
    string guess;
    string color = "blue";
    cout << "Enter the car's color: ";
    cin >> guess;


    if(guess == color){
        cout << "Congrats you guessed correctly that the car's color is " << color;
    }else if(guess != color){
        cout << "You could not guess the correct color of the car";
    }
    cin.get();
}