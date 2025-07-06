#include <iostream>

using namespace std;

int doFactorial(int n) {
    
    if(n == 0 ){
        return 1;
    }
   
   return n * doFactorial(n-1);
}

void Factorial(int n) {
   int ans = doFactorial(n);
   cout << "Factorial of " << n << " : " << ans;
}

int main() {
  
  int n=5;
  Factorial(n);
  return 0;
  
}
