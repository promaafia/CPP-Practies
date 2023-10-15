/*
    12.4.1. Write a program that converts a line to uppercase using funtion.
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
    cout << "\nuppercase string: " <<s<<endl;

    return 0;
}

