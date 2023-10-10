/*
    12.6. Write a program that read a line of text and display it in reverse order
*/


#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout << "Reverse string: " << s << endl;
    return 0;
}
