#include <iostream>
using namespace std;

class Example {
// befault private
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;


    // Constructor without initializer list
    Example() {
        publicVar = 10;         // Setting publicVar to 10
        privateVar = 20;        // Setting privateVar to 20
        protectedVar = 30;      // Setting protectedVar to 30
    }
    // alternative
    //  Example() : publicVar(10), protectedVar(20), privateVar(30) {}

    void showValues() {
        cout << "Public: " << publicVar << endl;
        cout << "Private: " << privateVar << endl;
        cout << "Protected: " << protectedVar << endl;
    }


};

int main() {
    Example ex;
    ex.showValues();  // Display initialized values
    
    // ex.publicVar; // okay
    // ex.protectedVar; // Error
    // ex.privateVar; // Error

    return 0;
}
