#include<bits/stdc++.h>
// #include<iostream>

using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++)
      cout << arr[i] << " ";
    cout << endl;
}

void swap(int *a, int *b) {

    int tp = *a;
        *a = *b;
        *b = tp;
}

void BubbleSort(int arr[], int n) {
    
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
   
     int arr[] = {20, 10, 50, 30, 40, 00};
     int n = sizeof(arr)/sizeof(arr[0]);

     cout << "Array Before Sorting." << endl;
     printArray(arr, n);

     BubbleSort(arr, n);
     cout << "Array After Sorting." << endl;
     printArray(arr, n);

    return 0;
}


// Stable Sort
// worst case -  n^2
// best case - n
