#include <iostream>
using namespace std;

//Title: Game	Number Guessing	
//Description: Write a program that generates a random number between 1 and 100 and asks the user to guess the number. 
//Provide feedback to the user (e.g., "Too high" or "Too low") until they guess the correct number.	

int main(){
    int random_number = rand() % 100 + 1;
    int guess;
    cout << random_number;

    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
    
    while(guess != random_number){

        if(guess > random_number){

            cout << "Your guess is higher than the guess number" << endl;
            cout << "Your guess is not correct! Guess again: ";
            cin >> guess;
            if(guess == random_number){
                cout << "You guessed the correct number: " << random_number;
        }
        }else{
            cout << "Your guess is lower than the guess number" << endl;
            cout << "Your guess is not correct! Guess again: ";
            cin >> guess;
            if(guess == random_number){
                cout << "You guessed the correct number: " << random_number;
        }
        }
         
    }
}
