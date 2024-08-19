#include<bits/stdc++.h>
using namespace std;

 
int factorial(int n) {
    
    if(n==0 || n==1)
      return 1;
    
    return n * factorial(n-1);
}
 
int main()
{   
    
    int num=5;
    // Factorial(num);
    
    cout << "Factorial of a number " 
         << num << " is :- " <<  factorial(num);
    return 0;
}
