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
partition an array and then recursively sorts the sub-arrays. The key operation in quick sort is partitioning
the array into two parts based on the pivot. It is one of the fastest sorting algorithms with an average time
complexity of O(n log n).

Steps of Quick Sort:

    Choose a Pivot:
        A pivot is an element from the array that helps in dividing the array into two sub-arrays.
        Commonly, the last element is chosen as the pivot, but it can be any element.

    Partitioning:
        The array is rearranged so that:
            All elements less than the pivot are on the left side.
            All elements greater than the pivot are on the right side.
        The pivot is placed in its correct position in the sorted array.

    Recursion:
        Recursively apply the quick sort algorithm to the left and right sub-arrays (elements to the left and
        right of the pivot).

Pivot in Quick Sort:

The pivot is an element around which the array is divided. After the partitioning process,
the pivot is placed in its correct sorted position. The elements to the left of the pivot are smaller, 
and those on the right are larger.
*/
