/*
    12.4. Write a program that converts a line to lowercase.
*/


#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter the string: ";

    cin.getline(str, sizeof(str));
    for (int i = 0; str[i]; ++i){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    cout << "Lowercase string: " << str << endl;
    return 0;
}

