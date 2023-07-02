#include <iostream>
using namespace std;

double power(double n, int p = 2) {
    double result = 1;
    for (int i = 0; i < p; i++) {
        result *= n;
    }
    return result;
}

int main() {
    double n;
    int p;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the power (optional,
     default is 2): ";
    if (!(cin >> p)) {
        p = 2;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cout << n << " raised to the power of " << p << " is " << power(n, p) << endl;
    return 0;
}










