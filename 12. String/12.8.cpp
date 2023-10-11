/*
    12.8. Write a program that read your name and display every character with one space in reverse order
*/


#include <iostream>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter string: ";
    cin.getline(name, sizeof(name));
    int count = 0;
    for (int i = 0; name[i]; ++i){
        count++;
    }
    cout << "reverse character: ";
    for (int i = count-1; i>=0; --i){
        cout << name[i] << " ";
    }
    return 0;
}
