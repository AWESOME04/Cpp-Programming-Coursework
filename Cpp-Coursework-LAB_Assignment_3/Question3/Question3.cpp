// Name: Evans Acheampong
// ID: 10987644
// Question 3
// LAB 3

#include <iostream>

using namespace std;

// Function to reverse the order of the elements in the array.
void reversed_array(int arr[], int size) {
    for (int x = 0; x < size / 2; x++) {
        int temp = arr[x];
        arr[x] = arr[size - x - 1];
        arr[size - x - 1] = temp;
    }
}


int main() {
    const int ARR_SIZE = 10;
    int arr[ARR_SIZE];

    // Taking input from the user and storing it in the array
    cout << "Please enter " << ARR_SIZE << " integers: ";
    for (int x = 0; x < ARR_SIZE; x++) {
        cin >> arr[x];
    }

    // Reversing the order of the elements in the array
    reversed_array(arr, ARR_SIZE);

    // Printing the reversed array to the console
    cout << "The Reversed array is given by: ";
    for (int x = 0; x < ARR_SIZE; x++) {
        cout << arr[x] << " ";
    }
    cout << endl;

    return 0;
}








