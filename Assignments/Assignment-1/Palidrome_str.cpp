#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    
    str2 = str1; // Make a copy of str1
    reverse(str2.begin(), str2.end()); // Reverse the copy
    
    if (str1 == str2) {
        cout <<str2<< " is palindrome" << endl;
    } else {
        cout <<str2<< " not palindrome" << endl;
    }
    
    return 0;
}

