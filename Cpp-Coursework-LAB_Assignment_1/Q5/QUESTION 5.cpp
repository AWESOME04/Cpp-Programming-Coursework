#include <iostream>
using namespace std;

int main() {
    // QUESTION 5
    /* Program that takes length as input in feet and inches and converts the
    lengths in centimeters */

    int feet, inches;
    cout << "Enter the length in feet: ";
    cin >> feet;
    cout << "Enter the length in inches: ";
    cin >> inches;

    double totalInches = (feet * 12) + inches;
    double centimeters = totalInches * 2.54;

    cout << "Length in centimeters: " << centimeters << endl;

    return 0;
}


