/*
    12.2. Write a program that displays a string (a line)
*/


#include <iostream>
using namespace std;

int main()
{
    char a[100];
    scanf("%[^\n]s", &a);
    printf("%s", a);
    return 0;
}
