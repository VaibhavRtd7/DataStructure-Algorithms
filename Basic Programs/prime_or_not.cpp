#include <iostream>
using namespace std;

bool isPrime(int N) {

    
    if (N <= 1) {
        return false;
    }
 
    for (int i = 2; i < N/2; i++) {
        if (N % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    int N = 10;
    cout << "Is " << N << " prime?" << endl;

    if (isPrime(N)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
