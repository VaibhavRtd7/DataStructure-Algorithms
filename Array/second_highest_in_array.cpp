#include<bits/stdc++.h>

using namespace std;

int main()
{
   
   int arr[5] = { 3, 4, 2, 5, 7};
   int n = sizeof(arr) / sizeof(arr[0]);

  int firstHigh=INT_MIN, secondHigh=INT_MIN;
  for(int i=0; i<n; i++) {
      
      if(arr[i] > firstHigh) {
          secondHigh = firstHigh;
          firstHigh = arr[i];
      }
      else if(arr[i] <= firstHigh && arr[i] > secondHigh) {
          secondHigh = arr[i];
      }
      
  }
  cout << "First Highest :- " << firstHigh << endl;
  cout << "Second Highest :- " << secondHigh << endl;

    return 0;
}
