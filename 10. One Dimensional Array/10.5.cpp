/*
    10.5. Write a program that read an array and display minimum
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
        //printf("%d ",a[i]);
    }
    int min = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("\nMinimum Value of Array is: %d ",min);

    return 0;
}
