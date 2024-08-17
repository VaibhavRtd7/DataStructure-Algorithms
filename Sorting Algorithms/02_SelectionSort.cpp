#include<iostream>
using namespace std;

//1 - Badde number pehle sort hogge..
//2 - not stable..

//3 - It would be become stable by little bit changes..

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

     for(int j=i+1; j<n; j++) {
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



<-- Selection Sort -->

   1).  Approach: Selection Sort repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion.
   2).  How it works:
        -Start with the first element of the array.
        - Find the minimum element in the unsorted portion of the array.
        - Swap it with the first element of the unsorted portion.
        - Move the boundary between sorted and unsorted portions one element to the right.
        - Repeat until the entire array is sorted.
    
    3) Time Complexity: O(n²) for all cases (best, average, and worst).
    4) Space Complexity: O(1) (in-place sort).
    5) Stability: Not stable (equal elements might not retain their relative order).
    6) Usage :-
         Less efficient on large lists compared to more advanced algorithms.

 //  Key Differences
    --> Methodology: Selection Sort selects the smallest element and places it in the correct position, 
                       while Insertion Sort inserts the current element into the correct position within the sorted portion.
    --> Efficiency: Insertion Sort can be faster than Selection Sort for small or nearly sorted arrays due to its O(n) best-case time complexity.
    --> Stability: Insertion Sort is stable, while Selection Sort is not.
