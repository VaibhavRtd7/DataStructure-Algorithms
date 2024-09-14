/*

Best   Case - n log(n)
Average Case - n log(n)
Worse Case - n log(n)

Merge sort is a sorting algorithm that follows the divide-and-merge approach. 
It works by recursively dividing the input array into smaller subarrays and
sorting those subarrays then merging them back together to obtain the sorted array.

*/


#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low , int mid, int high) {
    
    vector<int> temp;
    int left=low;
    int right=mid+1;
    
    while(left<=mid && right<=high) {
        if(arr[left] <= arr[right] ) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    
    while(right<=high) {
        temp.push_back(arr[right]);
        right++;
    }
    
    for(int i=low; i<=high; i++) {
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    
    if(low>=high) return;
    
    int mid = (low+high)/2;
    
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    
    merge(arr, low, mid, high);
    
}

int main() {

    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }cout << endl;
    
    mergeSort(arr, 0, n - 1);
    
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }cout << endl;
    
    return 0 ;
}

//  2nd method type

#include <iostream>
using namespace std;

void merge(int A[], int left, int mid , int right) {

   // Size of subArray
   int  n1 = mid-left+1;
   int  n2 = right-mid;

   // Create 2 temp Arrays
   int *L = new int[n1],
       *R = new int[n2];

   // Copy Data to L[] & R[]
   for(int i=0; i<n1; i++)
     L[i] = A[left+i];              // Remind
   for(int j=0; j<n2; j++)
     R[j] = A[mid+1+j];           // Remind
    
int i=0, j=0;
int k=left;    // Initial Index Of merged A

    // Merging the L[] & R[] into A[left...right]
    while(i<n1 && j<n2) {
        if(L[i] <= R[j]){
          A[k] = L[i];
          i++;
          k++;
        } 
        else {
          A[k] = R[j];
          j++;
          k++;
        }
    }

    // Copy the remaining elements of L[] & R[] into A[]
    while(i < n1){
        A[k] = L[i];
        i++;
        k++;
    }

    while(j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;

}

void mergeSort(int A[], int p, int r) {
     if(r <= p)
      return;
     
     int mid = p + (r-p)/2;
     mergeSort(A, p, mid);
     mergeSort(A, mid+1, r);
     merge(A, p, mid, r);
    
}

void printArray(int A[], int n) {
    for(int i=0; i<n; i++) 
     cout << A[i] << " ";
     cout << endl;
}  

int main() {

    int A[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(A)/sizeof(A[0]);
    
    cout << "Given Array : ";
    printArray(A, n);

    mergeSort(A, 0, n-1);
    
    cout << "Sorted Array : ";
    printArray(A, n);

    return 0;
}


/*

Best   Case - n log(n)
Average Case - n log(n)
Worse Case - n log(n)

Merge sort is a sorting algorithm that follows the divide-and-conquer approach. 
It works by recursively dividing the input array into smaller subarrays and
sorting those subarrays then merging them back together to obtain the sorted array.

*/



// #include <iostream>
// using namespace std;


// p -> brgin
// r -> end

// Merges two subAs of A[].
// First subA is arr[p..mid]
// Second subA is arr[mid+1..r]

