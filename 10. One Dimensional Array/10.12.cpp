/*
    10.12. Write a program that read and sort an array using bubble sort in decending order
*/


#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for (int j = 0; j < n - 1; j++){
        bool flag = false;
        for (int i = 0; i < n-j-1; i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i+1]);
                flag = true;
            }
        }
        if(flag == false)
            break;
    }
}
int main(){
    int arr[] = {2, 6, 4, 1, 5, 3};
    BubbleSort(arr, 6);

    for (int i = 5; i >= 0 ; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
