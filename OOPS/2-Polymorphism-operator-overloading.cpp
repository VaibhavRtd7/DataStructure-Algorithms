#include <iostream>

using namespace std;

// Polymorphism 
// Compile Time Polymorphism
// method overloading

class Complex {
    private:
    int real, imag;
    
    public : 
    Complex(int r=0, int i=0) {
        real=r;
        imag=i;
    }
    
    // This is automatically called
    // when '+' is used with between
    // two Complex objects
    Complex operator+(Complex const& obj) {
        Complex ans;
        ans.real = real + obj.real;
        ans.imag = imag + obj.imag;
        return ans;
    }
    
    void print() {
        cout << real << " + i" << imag << endl;
    }
    
};

int main()
{
    Complex c1(8, 2), c2(4, 3);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}
