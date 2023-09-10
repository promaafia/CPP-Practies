/*
    10.6. Write a program that inserts any number in an array
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
    int pos, value;
    printf("\n\nEnter the position and value: ");
    scanf("%d %d", &pos, &value);

    for(int i=n-1; i>=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=value;
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
