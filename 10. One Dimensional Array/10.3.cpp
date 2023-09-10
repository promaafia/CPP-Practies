/*
    10.3. Write a program that read an array and display average
*/


#include <iostream>
using namespace std;

int main()
{
    int a[100], sum = 0, n;
    printf("Enter the nth position of array: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ",a[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum+= a[i];
    }
    printf("\nAverage of Array is: %d ",sum/n);

    return 0;
}
