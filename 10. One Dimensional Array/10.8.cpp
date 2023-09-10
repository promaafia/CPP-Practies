/*
    10.8. Write a program that searches any number from an array
*/


#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i;
    printf("Enter the nth position of array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ",a[i]);
    }
    int value, result = 0;

    printf("\n\nEnter the searching element: ");
    scanf("%d", &value);

    for(i=0; i<n; i++)
    {
        if(a[i] == value)
        {
            result = 1;
            break;
        }
    }
    if(result == 1)
    {
        printf("%d is found position of %d\n", value, i);
    }
    else
    {
        printf("%d is not found\n", value);
    }

    return 0;
}
