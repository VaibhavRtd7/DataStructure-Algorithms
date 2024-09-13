#include<iostream>
 using namespace std;

void InsertionSort(int arr[], int n) {

  for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
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

<--- Insertion Sort --->

    1). Approach: Insertion Sort builds the sorted array one element at a time by repeatedly picking the next element and 
                   inserting it into its correct position among the already sorted elements.
    2). How it works:
         Start with the second element of the array (consider the first element as already sorted).
         Compare it with elements in the sorted portion (to its left).
         Shift elements to the right until the correct position for the current element is found.
         Insert the element in its correct position.
         Move to the next element and repeat until the entire array is sorted.
    3). Time Complexity:
         Best case: O(n) (when the array is already sorted).
         Average and Worst case: O(n²).
    4). Space Complexity: O(1) (in-place sort).
    5). Stability: Stable (equal elements retain their relative order).
    6). Usage: Efficient for small lists or nearly sorted data. Commonly used as the base case for more advanced algorithms like Quick Sort.

 //  Key Differences

    --> Methodology: Selection Sort selects the smallest element and places it in the correct position, 
                       while Insertion Sort inserts the current element into the correct position within the sorted portion.
    --> Efficiency: Insertion Sort can be faster than Selection Sort for small or nearly sorted arrays due to its O(n) best-case time complexity.
    --> Stability: Insertion Sort is stable, while Selection Sort is not.
