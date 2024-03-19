#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    int Num1= num;
    int sum = 0;
    int n = log10(num) + 1;  // Calculate the number of digits

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    if (sum == Num1) {
        cout << Num1 << " is an Armstrong number." << endl;
    } else {
        cout << Num1 << " is not an Armstrong number." << endl;
    }

    return 0;
}

