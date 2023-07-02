// Student ID: 10987644
// Name: Evans Acheampong
// Question 3


#include <iostream>
using namespace std;

const int NUM_ROWS = 13;
const int NUM_SEATS_PER_ROW = 6;

// Initialize all seats to available
char seatingChart[NUM_ROWS][NUM_SEATS_PER_ROW] = {'*'};

// Print the seating chart
void printSeatingChart() {
    cout << "\n\n\tA\tB\tC\tD\tE\tF\n";
    for (int i = 0; i < NUM_ROWS; i++) {
        cout << "Row " << i + 1 << "\t";
        for (int j = 0; j < NUM_SEATS_PER_ROW; j++) {
            cout << seatingChart[i][j] << "\t";
        }
        cout << "\n";
    }
}

// Reserve a seat
void reserveSeat(char seatType) {
    int row;
    char seat;

    // Prompt user for row number and seat letter
    cout << "\nEnter the row number (1-13): ";
    cin >> row;
    cout << "Enter the seat letter (A-F): ";
    cin >> seat;

    // Convert seat letter to seat number
    int seatNum = seat - 'A';

    // Check if seat is available
    if (seatingChart[row - 1][seatNum] == '*') {
        // Reserve the seat
        seatingChart[row - 1][seatNum] = seatType;
        cout << "\nSeat " << seat << " in row " << row << " has been reserved.\n";
    } else {
        // Seat is not available
        cout << "\nSorry, that seat is not available at this time. Please choose another seat.\n";
    }
}

int main() {
    int choice;

    // Initialize all seats to available
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_SEATS_PER_ROW; j++) {
            seatingChart[i][j] = '*';
        }
    }

    // Main loop
    do {
        cout << "\n\nPlease choose an option:\n";
        cout << "1. Reserve a first class seat\n";
        cout << "2. Reserve a business class seat\n";
        cout << "3. Reserve an economy class seat\n";
        cout << "4. Display seating chart\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                reserveSeat('F');
                break;
            case 2:
                reserveSeat('B');
                break;
            case 3:
                reserveSeat('E');
                break;
            case 4:
                printSeatingChart();
                break;
            case 5:
                cout << "\nThank you for using the airline seating reservation system.\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
