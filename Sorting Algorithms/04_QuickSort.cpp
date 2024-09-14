#include<bits/stdc++.h>
using namespace std;

// l is starting index
// r is ending index

/*

Best Case :- n log(n)
Avg. Case :- n log(n)
Worst Case :- n^2      - - - - - - > when array is already sorted.

Quick Sort :- Divide and Conquer
Merge Sort :- Divide and Merge


Here we keep the pivot at its right position and then repeat the process for left and right partition through recursion.

*/

void swap(int *a, int *b) {          
    int t = *a;
        *a = *b;
        *b = t;
}

void printArray(int A[], int n) {
    for(int i = 0; i < n ; i++)
      cout << A[i] << " ";
    cout << endl;
}

int partition(int A[], int l, int r) {
    
    int x = A[r];
    int i = l - 1;

    for(int j = l; j <r; j++) {
        // If current element is smaller than the pivot
        if(A[j] < x) {
            i++;         // increment index of smaller element
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i+1], &A[r]);

    return i+1;                                 // Improve....
}

void QuickSort(int A[], int l, int r) {

    if(l < r)
    {
        int pi = partition(A, l, r);
        QuickSort(A, l , pi-1);
        QuickSort(A, pi+1 , r);
    }
}



int main(){

    int arr[] = {10, 7, 8, 9, 1, 5 };
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array is : " << endl;
    printArray(arr, n);
    
    QuickSort(arr, 0, n-1);
    cout << "Sorted Array is : " << endl;
    printArray(arr, n);
    return 0;
}

/*


Best Case :- n log(n)
Avg. Case :- n log(n)
Worst Case :- n^2          --> when array is already sorted.



------------------------------------------------------

    QuickSort :-
    T(n) = T(n-1) + cn  ---> O(n^2)  Worst case
                             O(nlogn)  avg. and best case.

    Randomized Quick Sort.
     Worst Case.  T(n) = O(nlogn)

    if all the elements are same then O(n^2).
*/
