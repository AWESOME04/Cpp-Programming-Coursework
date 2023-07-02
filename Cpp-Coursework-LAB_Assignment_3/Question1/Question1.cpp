// Name: Evans Acheampong
// ID: 10987644
// Question 1
// LAB 3

#include <iostream>

using namespace std;


// Function to add arrays A and B to C in Ascending order
void merge_ascending_arr(int A[], int M, int B[], int N, int C[]) {
    int x = 0, y = 0, z = 0;

    // Comparing the elements in arrays A and B and adding the smaller one to array C
    while (x < M && y < N) {
        if (A[x] < B[y]) {
            C[z++] = A[x++];
        } else {
            C[z++] = B[y++];
        }
    }

    // Remaining elements from the other array are added to C in order.
    while (x < M) {
        C[z++] = A[x++];
    }

    while (y < N) {
        C[z++] = B[y++];
    }
}

// Function to copy array B in reverse order and merge th other arrays into C in ascending order
void merging_arrays(int A[], int M, int B[], int N, int C[]) {

    // This is to copy array B in reverse order(reversedB)
    int reversedB[N];
    for (int x = N - 1, y = 0; x >= 0; x--, y++) {
        reversedB[y] = B[x];
    }

    // This is to merge arrays A and reversed B into C in ascending order
    merge_ascending_arr(A, M, reversedB, N, C);
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {15, 12, 11, 3, };
    int C[10];

    // The size of each array is determined using the sizeof operator
    int M = sizeof(A) / sizeof(A[0]);
    int N = sizeof(B) / sizeof(B[0]);

    // Calling function 'merging_arrays' to merge these two arrays into a new array C
    merging_arrays(A, M, B, N, C);

    // Printing the Merged array to the console
    cout << "The Merged Array is given as: ";
    for (int x = 0; x < M + N; x++) {
        cout << C[x] << " ";
    }
    cout << endl;

    return 0;
}


