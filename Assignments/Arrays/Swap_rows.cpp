#include <iostream>
using namespace std;

int main() {
    int xsize, ysize, row1, row2;

    cout << "Enter the size of matrix (rows columns): ";
    cin >> ysize >> xsize;

    int matrix[10][10];

    cout << "Enter the matrix:\n";
    for (int i = 0; i < ysize; i++) {
        for (int j = 0; j < xsize; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the rows to be interchanged (1-indexed): ";
    cin >> row1 >> row2;

    if (row1 > 0 && row2 > 0 && row1 <= ysize && row2 <= ysize) {
        for (int j = 0; j < xsize; j++) {
            int temp = matrix[row1 - 1][j];
            matrix[row1 - 1][j] = matrix[row2 - 1][j];
            matrix[row2 - 1][j] = temp;
        }

        cout << "New Matrix:\n";
        for (int i = 0; i < ysize; i++) {
            for (int j = 0; j < xsize; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "Invalid row numbers.\n";
    }

    return 0;
}

