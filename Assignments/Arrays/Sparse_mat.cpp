/* This is a C++ Program to check sparsity of a given matrix. If the number of zeros in a matrix exceeds (n*m)/2,
 where n, m is the dimension of the matrix, matrix is sparse matrix.*/
 
 #include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Enter the dimensions of the matrix: ";
    cin >> m >> n;

    double mat[m][n];
    int zeros = 0;

    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 0) {
                zeros++;
            }
        }
    }

    if (zeros > (m * n) / 2) {
        cout << "The matrix is a sparse matrix";
    } else {
        cout << "The matrix is not a sparse matrix";
    }

    return 0;
}

