# C++ Access Specifiers and Friend Classes

## Access Specifiers

In C++, access specifiers define the level of access control over members (variables and functions) in classes and structures. There are three main access specifiers:

1. **Public**: Members declared as public are accessible from outside the class.
2. **Protected**: Members declared as protected are accessible within the class and by derived (inherited) classes, but not from outside.
3. **Private**: Members declared as private are accessible only within the class itself and not by derived classes or outside code.

### Example of Access Specifiers

```cpp
#include <iostream>
using namespace std;

class AccessExample {
public:
    int publicVar;  // Accessible anywhere
protected:
    int protectedVar;  // Accessible within class and derived classes
private:
    int privateVar;  // Accessible only within the class

public:
    // Constructor to initialize members
    AccessExample() : publicVar(10), protectedVar(20), privateVar(30) {}

    // Public function to display variables
    void show() {
        cout << "Public Var: " << publicVar << endl;
        cout << "Protected Var: " << protectedVar << endl;
        cout << "Private Var: " << privateVar << endl;
    }
};

// Derived class
class DerivedExample : public AccessExample {
public:
    void showProtected() {
        // Accessing protected member in derived class
        cout << "Protected Var from Derived: " << protectedVar << endl;
    }
};

int main() {
    AccessExample obj;
    obj.show();                // Accessing public function
    cout << "Public Var: " << obj.publicVar << endl;  // Accessing public variable
    // obj.protectedVar; // Error: Cannot access protected member outside class
    // obj.privateVar;   // Error: Cannot access private member outside class

    DerivedExample derivedObj;
    derivedObj.showProtected();  // Accessing protected member in derived class

    return 0;
}
```
## Friend Class

In C++, a friend class allows one class to access the private and protected members of another class.
This is useful when two classes need to work closely together and one class should have access
to the private or protected members of another.

this friendship allows FriendClass(BoxInspector) to access the private members only through an instance of PrimaryClass(Box)

```cpp

#include <iostream>
using namespace std;

class Box {
private:
    int width;   // Private member variable

public:
    Box(int w) : width(w) {}   // Constructor to initialize width

    // Friend class declaration
    friend class BoxInspector;  // BoxInspector can access private members of Box
};

class BoxInspector {
public:
    void displayWidth(Box& box) {
        // Accessing the private member of Box
        cout << "Box width: " << box.width << endl;
    }
};

int main() {
    Box myBox(10);            // Create a Box object with width 10
    BoxInspector inspector;    // Create a BoxInspector object

    inspector.displayWidth(myBox);  // BoxInspector can access Box's private member

    return 0;
}


```
