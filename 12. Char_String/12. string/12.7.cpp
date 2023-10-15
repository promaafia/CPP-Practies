/*
    12.7. Write a program that read your name and display every character with one space
*/


#include <iostream>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter string: ";
    cin.getline(name, sizeof(name));
    for (int i = 0; name[i]; ++i){
        cout << name[i] << " ";
    }
    return 0;
}
