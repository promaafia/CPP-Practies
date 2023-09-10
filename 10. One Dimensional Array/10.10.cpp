/*
    10.10. write a program that read and sort an array in decending order
*/


#include <iostream>
using namespace std;

int main()
{
    int a[100], n, temp;
    printf("Enter the nth position of array: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ",a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\n\narray in ascending order: \n");

    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
