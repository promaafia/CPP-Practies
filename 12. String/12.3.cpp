/*
    12.3. Write a program that converts a line to uppercase.
*/


#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i)
    {
        s[i] = toupper(s[i]);
    }
    cout << "\nUppercase string: " <<s<<endl;

    return 0;
}
