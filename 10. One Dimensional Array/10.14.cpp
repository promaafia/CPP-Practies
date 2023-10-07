/*
    10.14. Write a program that display first n fibonacci numbers using array
*/


#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else return fib(n - 2) + fib (n - 1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",fib(i));
    }

    return 0;
}
