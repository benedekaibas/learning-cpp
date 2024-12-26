#include <iostream>
#include <string>  // Include the <string> header for using the string type
using namespace std;

int main(){
    string userDay;
    string guessDay;
    guessDay = "Friday";
    cout << "enter a day: ";
    cin >> userDay;

    cout << "the user entered the following: " << userDay << endl;

    if(guessDay == userDay){
        cout << "Your guess is good since " << guessDay << " = " << userDay; 
    } else {
        cout << "Your guess is not good since " << guessDay << " != " << userDay; 

    };
    cin.get();
};
