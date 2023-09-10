/*
    10.12. Write a program that read and sort an array using bubble sort in decending order
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
