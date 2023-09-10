/*
    10.1. Write a program that read and display an array
*/


#include <iostream>
using namespace std;

int main()
{
    int a[5];
    for(int i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<=4; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
