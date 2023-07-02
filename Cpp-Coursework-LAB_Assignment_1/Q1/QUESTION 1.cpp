#include <iostream>

using namespace std;

int main()
{
    // QUESTION 1
    // Program which accepts a character and display its next character
    char input;
    cout << "Enter any character: " << endl;
    cin >> input;
    cout << "The next character is: " << char(input + 1) << endl;
    return 0;

}
