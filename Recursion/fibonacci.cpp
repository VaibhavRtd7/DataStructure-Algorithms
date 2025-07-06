// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fibonacci(int n) {
    
    if(n == 0) {
        return 0;
    }
    
    if(n == 1) {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    
    int n=7;
    cout << "The fibonacci series upto nth term are " << endl;
    for(int i=0; i<n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}
