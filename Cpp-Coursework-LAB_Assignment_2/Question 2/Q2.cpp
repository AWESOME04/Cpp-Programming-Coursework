#include <iostream>
using namespace std;

void showChoice() {
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
}

int add(int num_1, int num_2) {
    return num_1 + num_2;
}

int subtract(int num_1, int num_2) {
    return num_1 - num_2;
}

int multiply(int num_1, int num_2) {
    return num_1 * num_2;
}

int divide(int num_1, int num_2) {
    return num_1 / num_2;
}

int main() {
    int choice;
    int num_1;
    int num_2;
    showChoice();
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> num_1 >> num_2;
    switch (choice) {
        case 1:
            cout << "The sum of the numbers is: " << add(num_1, num_2) << endl;
            break;
        case 2:
            cout << "The difference of the numbers is: " << subtract(num_1, num_2) << endl;
            break;
        case 3:
            cout << "The product of the numbers is: " << multiply(num_1, num_2) << endl;
            break;
        case 4:
            cout << "The quotient of the numbers is: " << divide(num_1, num_2) << endl;
            break;
        default:
            cout << "Invalid choice or wrong inputs. Try again." << endl;
    }
    return 0;
}
