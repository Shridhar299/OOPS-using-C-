#include<iostream>
#include<cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        s[i] = toupper(s[i]);
    }
    cout << "Lower to upper = " << s << endl;
    return 0;
}

