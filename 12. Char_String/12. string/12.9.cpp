/*
    12.9. Write a program that read any line of text and display every character in separate line
*/


#include <iostream>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter string: ";
    cin.getline(name, sizeof(name));
    for (int i = 0; name[i]; ++i){
        cout << name[i] << endl;
    }
    return 0;
}
