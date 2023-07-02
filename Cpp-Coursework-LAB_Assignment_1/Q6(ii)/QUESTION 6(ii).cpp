#include <iostream>
using namespace std;

int main() {
    // QUESTION 6(ii)
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
