/*
    10.7. Write a program that deletes any number from an array
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
    int pos;
    printf("\n\nEnter the position: ");
    scanf("%d", &pos);


    if(pos >= n+1)
    {
        printf("\nDelete not possible");
    }
    else
    {
        for(int i=pos; i<n-1; i++)
        {
            a[i]=a[i+1];
        }
        for(int i=0; i<n-1; i++)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}
