/*
    10.16. Write a program that reads any decimal number and display equivalent binary number
*/


#include <iostream>
using namespace std;

void d_to_b(int n){
    if(n == 0)
    {
        printf("0");
        return;
    }

    int arr[32];
    int i = 0;
    while(n > 0){
        arr[i++] = n % 2;
        n = n / 2;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%d ", arr[j]);
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    d_to_b(n);
    return 0;
}
