/*
    12.6. Write a program that read a line of text and display it in reverse order
*/


#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100];
    printf("Enter the string: ");
    scanf("%s", &a);
    strrev(a);
    printf("Reverse string is %s \n", a);

    return 0;
}
