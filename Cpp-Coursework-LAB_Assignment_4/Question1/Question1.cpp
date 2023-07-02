// Student ID: 10987644
// Name: Evans Acheampong
// Question 1


#include <iostream>

using namespace std;

const int ROWS = 12;
const int COLUMNS = 2;

void getData(int temp[][COLUMNS], int rows) {
    cout << "The following are the highest and lowest temperatures of the months of the year in Degree Celsius " << endl;
    for (int x = 0; x < rows; x++) {
        cout << "Enter the highest temperature for month " << x+1 << " of the year: ";
        cin >> temp[x][0];
        cout << "Enter lowest temperature for month " << x+1 << " of the year: ";
        cin >> temp[x][1];
    }
}


double averageHigh(int temp[][COLUMNS], int rows) {
    double total = 0;
    for (int y = 0; y < rows; y++) {
        total += temp[y][0];
    }
    return total / rows;
}


double averageLow(int temp[][COLUMNS], int rows) {
    double total = 0;
    for (int z = 0; z < rows; z++) {
        total += temp[z][1];
    }
    return total / rows;
}


int indexHighTemp(int temp[][COLUMNS], int rows) {
    int maximum_index = 0;
    int maximum_temp = temp[0][0];
    for (int i = 1; i < rows; i++) {
        if (temp[i][0] > maximum_temp) {
            maximum_temp = temp[i][0];
            maximum_index = i;
        }
    }
    return maximum_index;
}


int indexLowTemp(int temp[][COLUMNS], int rows) {
    int minimum_index = 0;
    int minimum_temp = temp[0][1];
    for (int j = 1; j < rows; j++) {
        if (temp[j][1] < minimum_temp) {
            minimum_temp = temp[j][1];
            minimum_index = j;
        }
    }
    return minimum_index;
}


int main() {
    int temps[ROWS][COLUMNS];
    getData(temps, ROWS);

    double avgHigh = averageHigh(temps, ROWS);
    double avgLow = averageLow(temps, ROWS);
    int index_max = indexHighTemp(temps, ROWS);
    int index_min = indexLowTemp(temps, ROWS);

    cout << "The Average high temperature for the year is: " << avgHigh << " degree Celsius" << endl;
    cout << "The Average low temperature for the year is: " << avgLow << " degree Celsius" << endl;
    cout << "Highest temperature for the year: " << temps[index_max][0]
         << " (month " << index_max+1 << ")" << endl;
    cout << "Lowest temperature for the year: " << temps[index_min][1]
         << " (month " << index_min+1 << ")" << endl;

    return 0;
}
