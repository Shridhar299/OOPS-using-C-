/*This is a C++ Program to perform encoding matrix using a hidden-key. 
Encoding is performed using matrix multiplication between given matrix and key matrix.*/



#include <iostream>
#include <conio.h> // For getch() on Windows, you may need to change this for other platforms
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int x, y, i, j;

    cout << "Enter the number of rows for the Message Matrix: ";
    cin >> x;
    cout << "Enter the number of columns for the Message Matrix: ";
    cin >> y;

    cout << "\nEnter elements for Matrix:\n";
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            cout << "Enter element a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\n\nMatrix:\n";
    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            cout << "\t" << a[i][j];
        }
        cout << "\n\n";
    }

    for (i = 0; i < y; i++) {
        for (j = 0; j < x; j++) {
            b[i][j] = x + y;
        }
    }

    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            c[i][j] = 0;
            for (int k = 0; k < y; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    cout << "\n-----------------------------------------------------------\n";
    cout << "\nEncoded Matrix:\n\n";
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            cout << "\t" << c[i][j];
        }
        cout << "\n\n";
    }

    getch(); // Wait for user input before closing the console window
    return 0;
}

