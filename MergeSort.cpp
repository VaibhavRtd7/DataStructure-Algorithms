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






// #include <iostream>
// using namespace std;


// p -> brgin
// r -> end

// Merges two subAs of A[].
// First subA is arr[p..mid]
// Second subA is arr[mid+1..r]
// void merge(int A[], int const left, int const mid,   int const right)
// {    
//     // size of temp arrays
//     auto const n1 = mid - left + 1;   // 2-0+1    
//     auto const n2 = right - mid;      // 5-2

//     // Create temp Arrays
//     auto *L = new int[n1],
//         *R = new int[n2];

//     // Copy data to temp As L[] and R[]
//     for (auto i = 0; i < n1; i++)
//         L[i] = A[left + i];
//     for (auto j = 0; j < n2; j++)
//         R[j] = A[mid + 1 + j];            // remind

//     auto i = 0, j = 0; 
//     int k = left; // Initial index of merged A

//     // Merge the temp As back into A[left..right]                      
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//               A[k] = L[i];
//            i++;                                
//         }
//         else {
//             A[k] = R[j];
//             j++;
//         }
//         k++;
//     }
    
//     // Copy the remaining elements of
//     // left[], if there are any
//     while (i < n1) {
//         A[k]= L[i];
//         i++;
//         k++;
//     }
//     // Copy the remaining elements of
//     // right[], if there are any
//     while (j < n2) {
//         A[k] = R[j];
//         j++;
//         k++;
//     }    
//     delete[] L;
//     delete[] R;
// }

// // p is for left index and r is
// // right index of the sub-A
// // of arr to be sorted */
// void mergeSort(int A[], int const p, int const r)
// {
//     if (p >= r)
//         return; // Returns recursively

//     auto mid = p + (r - p) / 2;
//     mergeSort(A, p, mid);
//     mergeSort(A, mid + 1, r);
//     merge(A, p, mid, r);
// }

// // UTILITY FUNCTIONS
// // Function to print an A
// void printA(int A[], int size)
// {
//     for (auto i = 0; i < size; i++)
//         cout << A[i] << " ";
// }

// // Driver code
// int main()
// {
//              //   0   1   2   3  4  5
//     int arr[] = { 12, 11, 13, 5, 6, 7 };
//     auto arr_size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Given A is \n";
//     printA(arr, arr_size);

//     mergeSort(arr, 0, arr_size - 1);

//     cout << "\nSorted A is \n";
//     printA(arr, arr_size);
//     return 0;
// }
