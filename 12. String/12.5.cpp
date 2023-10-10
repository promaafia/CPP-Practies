/*
    12.5. Write a program that read a line of text and display it's length
*/


#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    int len = s.length();
    cout << "\nstring length: " <<len<<endl;

    return 0;
}
