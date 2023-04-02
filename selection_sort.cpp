#include<iostream>
using namespace std;


void swap(int *a, int *b){
    int temp = *a;
        *a = *b;
        *b = temp;
}

void printA(int A[], int n){
    for(int i=0; i<n; i++)
      cout << A[i] << " ";
      cout << endl;
}


void selectionSort(int A[], int n) {
   int i, j, min;

   for(int i=0; i<n-1; i++) {
     min=i;

     for(int j=1; j<n; j++) {
       if(A[min] > A[j]){
          min=j;
       }
     }

     if(min != i)
      swap(&A[min], &A[i]);
   }
}

int main(){
    int A[] = {20, 30, 10, 40, 05};
    int n = sizeof(A)/sizeof(A[0]);
    
    selectionSort(A, n);

    cout << "Sorted Array is " << endl;
    printA(A,n);

    return 0;
}


  // Time Complexity O(n^2)  And  not stable
 
