#include <iostream>
using namespace std;

const int MAX = 100;

void read(int mat[MAX][MAX], int rows, int cols) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }
}

void display(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void add(int m1[MAX][MAX], int m2[MAX][MAX], int res[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void multiply(int m1[MAX][MAX], int r1, int c1, int m2[MAX][MAX], int r2, int c2, int res[MAX][MAX]) {
    if (c1 != r2) {
        cerr << "Matrix dimensions do not match for multiplication!" << endl;
        exit(1);
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            res[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void elementWiseMultiply(int m1[MAX][MAX], int m2[MAX][MAX], int res[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            res[i][j] = m1[i][j] * m2[i][j];
        }
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for Matrix A: ";
    cin >> rows >> cols;
    int matrixA[MAX][MAX];

    read(matrixA, rows, cols);

    cout << "Enter the number of rows and columns for Matrix B: ";
    cin >> rows >> cols;
    int matrixB[MAX][MAX];

    read(matrixB, rows, cols);

    cout << "Matrix A:" << endl;
    display(matrixA, rows, cols);

    cout << "Matrix B:" << endl;
    display(matrixB, rows, cols);

    int sum[MAX][MAX];
    add(matrixA, matrixB, sum, rows, cols);
    cout << "Matrix A + B:" << endl;
    display(sum, rows, cols);

    int product[MAX][MAX];
    multiply(matrixA, rows, cols, matrixB, rows, cols, product);
    cout << "Matrix A * B:" << endl;
    display(product, rows, cols);

    int elementWiseProduct[MAX][MAX];
    elementWiseMultiply(matrixA, matrixB, elementWiseProduct, rows, cols);
    cout << "Element-wise multiplication of Matrix A and B:" << endl;
    display(elementWiseProduct, rows, cols);

    return 0;
}

