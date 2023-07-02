#include <iostream>
using namespace std;

void print_pattern() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if (j % 2 == 0) {
                cout << "X";
            } else {
                cout << "O";
            }
        }
        cout << endl;
        for (int j = 0; j < 2; j++) {
            cout << "OXO" << endl;
        }
    }
}

int main() {
    print_pattern();
    return 0;
}
