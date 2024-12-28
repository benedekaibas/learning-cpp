#include <iostream>
using namespace std;

/*
Write a program that converts numerical grades to letter grades:

90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
*/

int main(){
    double grade;
    cout << "Enter your grade in numerical format: ";;
    cin >> grade;

    if(grade < 60){
        cout << "The grade you entered" << grade << " is equal to an F" << endl;
    } else if ( 60 <= grade && grade <= 69){
        cout << "The grade you entered" << grade << "is equal to a D " << endl;
    } else if ( 70 <= grade && grade <= 79){
        cout << "The grade you entered" << grade << "is equal to a C" << endl;
    } else if (80 <= grade && grade <= 89){
        cout << "The grade you entered" << grade << "is equal to a B" << endl;
    } else if (90 <= grade && grade <= 100){
        cout << "The grade you entered" << grade << "is equal to an A" << endl;
    } else {
        cout << "The grade you entered is either incorrect or the format is wrong." << endl;
    }

    return 0;
}
