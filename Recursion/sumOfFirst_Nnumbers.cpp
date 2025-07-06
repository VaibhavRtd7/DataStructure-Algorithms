#include <iostream>

using namespace std;

void doSum(int sum, int n) {
    
    if(n == 0 ){
        cout << "Sum : " << sum << endl;
        return;
    }
    sum += n;
    doSum(sum, n-1);
}

void NnumbersSum(int n) {
   doSum(0, n);
}

int main() {
  
  int n=5;
  NnumbersSum(n);
  return 0;
  
}
