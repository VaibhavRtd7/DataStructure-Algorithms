// #include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   
   int arr[5] = { 3, 4, 2, 5, 7};
   
   int n = sizeof(arr) / sizeof(arr[0]);
  // cout << n << endl;
  
  int firstMin=INT_MAX, secondMin=INT_MAX;
  for(int i=0; i<n; i++) {
      
      if(arr[i] < firstMin) {
          secondMin = firstMin;
          firstMin = arr[i];
      }
      else if(arr[i] >= firstMin && arr[i] < secondMin) {
          secondMin = arr[i];
      }
      
  }
  cout << "First Minimum :- " << firstMin << endl;
  cout << "Second Minimum :- " << secondMin << endl;

   return 0;
}
