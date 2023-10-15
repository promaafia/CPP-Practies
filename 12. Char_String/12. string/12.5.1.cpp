/*
    12.5. Write a program that read a line of text and display it's length
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
    cout << "\nstring length: " << count <<endl;

    return 0;
}
