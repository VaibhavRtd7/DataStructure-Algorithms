#include <bits/stdc++.h>
using namespace std;

// Function to generate a random number between 'start' and 'end'
int random(int start, int end) {
    return (rand() % (end - start + 1)) + start;
}

// Function to partition the vector based on a pivot
int partition(vector<int> &nums, int start, int end) {
    int x = nums[end];  // Choose the last element as the pivot
    int i = start - 1;
    int j;
    for (j = start; j < end; j++) {
        if (nums[j] <= x) {
            i = i + 1;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[end]);  // Place the pivot in its correct position
    return i + 1;  // Return the index of the pivot
}

// Function to randomly choose a pivot and partition the vector
int randomized_partition(vector<int> &nums, int start, int end) {
    int i = random(start, end);
    swap(nums[i], nums[end]);  // Swap the randomly chosen pivot with the last element
    return partition(nums, start, end);
}

// Function to perform QuickSort recursively
void quickSort(vector<int> &nums, int start, int end) {
    if (start < end) {
        int p = randomized_partition(nums, start, end);  // Partition the vector and get the pivot index
        quickSort(nums, start, p - 1);  // Sort the elements before the pivot
        quickSort(nums, p + 1, end);  // Sort the elements after the pivot
    }
}

int main() {
    vector<int> nums {7, 94, 163, 53, 196, 121, 72, 218, 5, 207, 152, 130, 61, 83, 229, 174, 94, 112, 185, 103};
    quickSort(nums, 0, nums.size() - 1);  // Sort the vector using QuickSort
    for (auto c: nums) {
        cout << c << " ";  // Print the sorted elements
    }
    cout << endl;
    return 0;
}
