/*
    10.16. Write a program that reads any decimal number and display equivalent binary number
*/


#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    printf("Enter the nth position of array: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ",a[i]);
    }

    return 0;
}
