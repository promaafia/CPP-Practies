/*
    12.5. Write a program that read a line of text and display it's length
*/


#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char a[100];
    printf("Enter the string: ");
    scanf("%s", &a);
    printf("Size of string: %s ", a);
    return 0;
}
