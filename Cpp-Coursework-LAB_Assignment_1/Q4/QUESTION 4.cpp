#include <iostream>
using namespace std;

int main() {

    // QUESTION 4
    /* Program which accepts days as integer and display total number of
    years, months and days in it */

    int days;
    cout << "Enter the number of days: ";
    cin >> days;

    int years = days / 365;
    int months = (days % 365) / 30;
    int remainingDays = (days % 365) % 30;

    cout << "Years: " << years << endl;
    cout << "Months: " << months << endl;
    cout << "Days: " << remainingDays << endl;

    return 0;
}
