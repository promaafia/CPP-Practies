#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int value = arr[i];
        int hole = i;
        while(hole > 0 && arr[hole - 1] > value){
            arr[hole] = arr[hole - 1];
            hole = hole - 1;
        }
        arr[hole] = value;
    }
}
int main(){
    int arr[] = {2, 7, 4, 1, 5, 3};
    InsertionSort(arr, 6);
    for (int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
}
