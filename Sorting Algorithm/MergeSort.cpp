#include <iostream>
using namespace std;

void Merge(int L, int R, int arr[]){
    int nL = sizeof(L);
    int nR = sizeof(R);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < nL && j < nR){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            k = k + 1;
            i = i + 1;
        } else{
            arr[k] = R[j];
            k = k + 1;
            j = j + 1;
        }
        k = k + 1;
    }
    while(i < nL){
        arr[k] = L[i];
        i = i + 1;
        k = k + 1;
        while(j < nR){
            arr[k] = R[j];
            j = j + 1;
            k = k + 1;
        }
    }
}

void MergeSort(int arr[], int n){
    n = sizeof(arr);
    if(n < 2)
        return;

    int mid = n/2;
    int L = mid * sizeof(arr);
    int R = (n - mid) * sizeof(arr);

    for (int i = 0; i < mid-1; i++){
        L[i] = arr[i];
    }
    for (int i = mid; i < n-1; i++){
        R[i - mid] = arr[i];
    }
    MergeSort(arr, n);
    Merge(L, R, arr);
}
int main(){
    int arr[] = {2, 4, 1, 6, 8, 5, 3, 7};
    MergeSort(arr, 8);
    for (int i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    }
}
