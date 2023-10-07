/*
    10.15. Write a program that display prime numbers under nth position using array
*/


#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("prime number is: ", n);

    for(i = 1; i <= n; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
        }
        if(i == j)
        {
            printf("%d ",i);
        }
    }

    return 0;
}

