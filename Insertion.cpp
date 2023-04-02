#include<iostream>
 using namespace std;

void InsertionSort(int A[], int n) {
  int key, i, j;
  for(j=1; j<n; j++) {
    key=A[j];
    i=j-1;

    while(i>=0 and A[i]>key) {
        A[i+1]=A[i];
        i=i-1;
    } 
    A[i+1]=key;
  }
}

void printArray(int A[], int n) {
  for(int i=0; i<n; i++) {
    cout << A[i] << " ";
  }
  cout << endl;
}
 int main() {
    
    int A[] = {30, 40, 10, 50, 20};
    int n = sizeof(A)/sizeof(A[0]);
    
    cout << "Sorted Array is : ";
    InsertionSort(A,n);
    printArray(A, n);

    return 0; 
 }

 // Time Complexity O(n^2) & Stable Sort
