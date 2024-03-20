#include <iostream>
using namespace std;

const int MAX = 100;

void transpose(int mat[MAX][MAX], int trans[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            trans[j][i] = mat[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int mat[MAX][MAX], trans[MAX][MAX];

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }

    transpose(mat, trans, rows, cols);

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

