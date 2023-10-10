/*
    12.4. Write a program that converts a line to lowercase.
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
        s[i] = tolower(s[i]);
    }
    cout << "\nlowercase string: " <<s<<endl;

    return 0;
}
