#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    
    if(n <= 1)
      return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}
 
int main()
{   
    int num=5;
    // Factorial(num);
    
    cout << num << "th fibonacci number is :- " <<  fibonacci(num-1);
    return 0;
}
