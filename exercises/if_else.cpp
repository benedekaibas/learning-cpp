#include <iostream>
#include <cmath>
using namespace std;

/*
Write a program that converts numerical grades to letter grades:

90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F


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

*/

// Write a program that calculates BMI and displays the corresponding category.

int main(){
    double pound;
    double kg;

    double feet;
    double meters;

    string pounds_kg; // we only need to use pounds and kg string since if it is pounds then the other option is automatically feet and not meters

    cout << "Do you want to use pounds or kilograms?: ";
    cin >> pounds_kg;

    if (pounds_kg == "pounds"){
        cout << "Enter your height in feet: ";
        cin >> feet;

        cout << "Enter your weight in pounds: ";
        cin >> pound;

        double bmi_pound_feet = pound / pow(feet, 2);
        cout << "Your BMI is the following: " << " " << bmi_pound_feet << endl;
    } else if (pounds_kg == "kilograms"){
        cout << "Enter your height in meters: ";
        cin >> meters;

        cout << "Enter your weight in kilograms: ";
        cin >> kg;

        double bmi_kg_meters = kg / pow(meters, 2);
        cout << "Your BMI is the following: " << " " << bmi_kg_meters << endl;
    };

    return 0;

}