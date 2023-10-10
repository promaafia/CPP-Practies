/*
    12.7. Write a program that read your name and display every character with one space
*/


#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    char name[100];

    printf("Enter your name: ");
    scanf(" %[^\n]s", name);
    printf("Your Name is: %s", name.split());

    return 0;
}
