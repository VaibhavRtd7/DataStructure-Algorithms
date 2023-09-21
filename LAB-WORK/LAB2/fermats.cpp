#include <bits/stdc++.h>

using namespace std;

class Prime {
    // Number of Test cases
    unsigned long long k;

public:
    Prime(unsigned long long k = 100) {
        this->k = k;
    }

    bool isPrime(unsigned long long n) {
        if (n <= 1 or n == 4) {
            return false;
        }

        if (n == 2 or n == 3) {
            return true;
        }
        unsigned long long temp = k;
        while (temp--) {
            unsigned long long a = 2 + (rand() % (n - 3));
            if (GCD(a, n) != 1) {
                return false;
            }
            if (power(a, n - 1, n) != 1) {
                return false;
            }
        }
        return true;
    }

    unsigned long long GCD(unsigned long long a, unsigned long long b) {
        while (b > 0) {
            unsigned long long r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    unsigned long long power(unsigned long long x, unsigned long long y, unsigned long long n) {
        unsigned long long result = 1;
        while (y > 0) {
            if (y % 2 == 1) {
                result = (result * x) % n;
            }
            y = y / 2;
            x = (x * x) % n;
        }
        return result;
    }
};

int main() {
    srand(time(NULL));
    cout << "enter number to check : ";
    unsigned long long num;
    cin >> num;
    cout << "Enter number of tests : ";
    unsigned long long k;
    cin >> k;

    if (Prime(k).isPrime(num)) {
        cout << num << " is Prime" << endl;
    } else {
        cout << num << " is not Prime" << endl;
    }

    return 0;
}
