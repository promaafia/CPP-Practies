/*
    10.2. Write a program that read an array and display sum
*/


#include <iostream>
using namespace std;

int main()
{
    int a[100], sum = 0;;
    for(int i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
        //printf("%d ",a[i]);
    }
    for(int i=0; i<=4; i++)
    {
        sum+= a[i];
    }
    printf("\nSum of Array is: %d ",sum);

    return 0;
}
