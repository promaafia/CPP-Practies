#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for (int i = 0; i < n - 2; i++){ // we need to do n-2 passes
        int iMin = i; // i th position: elements from i till n-1 are candidates
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[iMin]){
                iMin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
    }
}
int main(){
    int arr[] = {2, 6, 4, 1, 5, 3};
    SelectionSort(arr, 6);
    for (int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
}
