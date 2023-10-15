/*
    12.6. Write a program that read a line of text and display it in reverse order
*/


#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, sizeof(str));
    int count = 0;
    for (int i = 0; str[i]; ++i){
        count++;
    }
    //acout << "string length: " << count << endl;

    for (int i = count-1; i >= 0 ; --i){
        cout << str[i];
    }
    return 0;
}
