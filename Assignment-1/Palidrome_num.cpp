#include <iostream>
using namespace std;

int main() {
    int n, rev= 0, rem, org;
    cout << "Enter an integer: ";
    cin >> n;
    org = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // palindrome if original and reversed are equal
    if (org == rev)
        cout << org << " is a palindrome." << endl;
    else
        cout << org << " is not a palindrome." << endl;

    return 0;
}

