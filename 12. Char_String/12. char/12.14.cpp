/*
    12.14. Write a program that read two lines of text and copy second line into first line
*/


#include <iostream>
using namespace std;

int main()
{
    char text[100];
    cin.getline(text, sizeof(text));
    cout << text;

    return 0;
}
