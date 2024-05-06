#include<iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str[50];
    int i, len, freq[26];
    cout << "Enter a string : ";
    gets(str);
    len = strlen(str);
    for(i = 0; i < 26; i++)
        freq[i] = 0;
    for(i = 0; i < len; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            freq[str[i] - 97]++;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            freq[str[i] - 65]++;
    }
    cout << "Frequency of characters\n";
    for(i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            cout << "  " << static_cast<char>(i + 'a') << " : " << freq[i];
            cout << "\n";
        }
    }
    return 0;
}
