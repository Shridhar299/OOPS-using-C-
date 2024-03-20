#include <iostream>

using namespace std;

// Function to input elements of a matrix
void inputMatrix(int matrix[10][10], int rows, int cols) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to calculate the dot product of two matrices
void calculateDotProduct(int A[10][10], int B[10][10], int C[10][10], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n, p, q;
    cout << "Enter number of rows and columns of matrix A : ";
    cin >> m >> n;
    cout << "Enter number of rows and columns of matrix B : ";
    cin >> p >> q;

    if (n != p) {
        cout << "Dot product cannot be found as matrices are not compatible!" << endl;
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];

    inputMatrix(A, m, n);
    inputMatrix(B, p, q);

    calculateDotProduct(A, B, C, m, n, q);

    // Printing matrices A and B
    cout << "Matrix A : \n";
    printMatrix(A, m, n);

    cout << "Matrix B : \n";
    printMatrix(B, p, q);

    // Printing the dot product matrix
    cout << "Dot product : \n";
    printMatrix(C, m, q);

    return 0;
}

