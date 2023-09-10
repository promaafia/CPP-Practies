/*
    10.4. Write a program that read an array and display maximum
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
    int max = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("\nMaximum Value of Array is: %d ",max);

    return 0;
}
