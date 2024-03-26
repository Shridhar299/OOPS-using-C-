/* The program takes a matrix and checks if it is orthogonal. 
A square matrix is defined as an orthogonal matrix if its transpose matrix is same as its inverse matrix.*/



#include <iostream>
using namespace std;

int main() {
    int m, n, p, i, j, k;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    if (m != n) {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }

    int A[10][10], T[10][10], P[10][10];

    cout << "Enter elements of matrix: ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            T[j][i] = A[i][j];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            int sum = 0;
            for (k = 0; k < n; k++)
                sum += A[i][k] * T[k][j];
            P[i][j] = sum;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                if (P[i][j] != 1)
                    break;
            } else {
                if (P[i][j] != 0)
                    break;
            }
        }
        if (j != m)
            break;
    }

    if (i != m)
        cout << "Matrix is not orthogonal.\n";
    else
        cout << "Matrix is orthogonal.\nPrinting Original Matrix:\n";

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

