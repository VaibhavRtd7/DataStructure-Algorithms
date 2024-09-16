#include <iostream>

using namespace std;

// Polymorphism 
// Compile Time Polymorphism
// method overloading

class Calculator {
    public : 
    
    int add(int a, int b) {
        return a + b;
    }
    
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main()
{
    Calculator calc;
    cout << "Sum of two numbers :- " << calc.add(10, 20) << endl;
    cout << "Sum of three numbers :- " << calc.add(10, 20, 30) << endl;
    

    return 0;
}
