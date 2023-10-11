/*
    12.3. Write a program that converts a line to uppercase.
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
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    cout << "Uppercase string: " << str << endl;
    return 0;
}
