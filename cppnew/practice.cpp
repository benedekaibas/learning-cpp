#include <iostream>
using namespace std;

int main(){
    bool decider = false;
    
    string question;

    cout << "What's my favourite color?: ";
    cin >> question;

    if(question == "red"){
        decider = true;
        return decider;
    } else{
        cout << "program is not working efficiently";
    }

    
}