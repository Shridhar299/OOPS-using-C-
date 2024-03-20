#include <iostream>
using namespace std;

const int SIZE = 2; // Assuming 2x2 matrices

// Function to calculate the determinant of a 2x2 matrix
int determinant(int mat[][SIZE]) {
    return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
}

// Function to check if a matrix is invertible
bool isMatrixInvertible(int mat[][SIZE]) {
    int det = determinant(mat);
    return det != 0;
}

int main() {
    int matrix[SIZE][SIZE];

    // Input for the matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }

    // Check if the matrix is invertible
    if (isMatrixInvertible(matrix)) {
        cout << "Matrix is invertible." << endl;
    } else {
        cout << "Matrix is not invertible." << endl;
    }

    return 0;
}

