// Name: Evans Acheampong
// ID: 10987644
// Question 2
// LAB 3

#include <iostream>

using namespace std;


void MIX(int A[], int M, int B[], int N, int C[], int D[]) {
    int c = 0, d = 0;

    // Copying even numbers from A into C from left to right
    for (int x = 0; x < M; x++) {
        if (A[x] % 2 == 0) {
            C[c++] = A[x];
        }
    }

    // Copying odd numbers from A into C from right to left
    for (int x = M - 1; x >= 0; x--) {
        if (A[x] % 2 == 1) {
            C[c++] = A[x];
        }
    }

    // Copying even numbers from B into C from left to right
    for (int x = 0; x < N; x++) {
        if (B[x] % 2 == 0) {
            C[c++] = B[x];
        }
    }

    // Copying odd numbers from B into D from right to left
    for (int x = N - 1; x >= 0; x--) {
        if (B[x] % 2 == 1) {
            D[d++] = B[x];
        }
    }

    // Copying odd numbers from D into C from right to left
    for (int x = d - 1; x >= 0; x--) {
        C[c++] = D[x];
    }
}

int main() {
    int M = 9, N = 5;
    int A[M] = {5, 4, 3, 2, 1, 9, 8, 2, 1};
    int B[N] = {8, 4, 6, 4, 11};
    int C[M + N], D[N];

    MIX(A, M, B, N, C, D);

    cout << "The Mixed array is given as: ";
    for (int x = 0; x < M + N; x++) {
        cout << C[x] << " ";
    }
    cout << endl;

    return 0;
}

