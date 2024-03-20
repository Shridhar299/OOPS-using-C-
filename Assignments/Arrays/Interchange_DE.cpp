#include <iostream>
using namespace std;

int main() {
    int size, swap;

    cin >> size;
    int matrix[size][size];

    // taking value corresponding to each cell from input
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // swapping the values of diagonals
    for(int i = 0, j = 0, k = size - 1; j < size; j++, i++, k--) {
        swap = matrix[j][i];
        matrix[j][i] = matrix[j][k];
        matrix[j][k] = swap;
    }

    // printing the values
    cout << "New Matrix\n";
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

