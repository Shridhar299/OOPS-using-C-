#include<iostream>
using namespace std;

int main() {
    int num, sum = 0, rem;
    cout << "Enter a number: ";
    cin >> num;

    // Reverse the number using a while loop
    while (num != 0) {
        rem = num % 10;
        sum = sum * 10 + rem;
        num=num / 10;
    }
    cout << "Reversed number: " << sum << endl;
    return 0;
}

