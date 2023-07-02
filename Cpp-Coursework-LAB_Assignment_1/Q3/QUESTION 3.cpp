#include <iostream>
using namespace std;

int main() {
    // QUESTION 3
    // Program to check whether the given number is even or odd
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Using ternary operator
    (num % 2 == 0) ? cout << num << " is even." : cout << num << " is odd.";

    return 0;
}

