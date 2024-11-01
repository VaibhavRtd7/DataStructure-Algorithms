
this friendship allows FriendClass to access the private members only through an instance of PrimaryClass

```cpp
#include <iostream>
using namespace std;

class PrimaryClass {
private:
    int privateValue;

public:
    // PrimaryClass() : privateValue(100) {}
    PrimaryClass () {
        privateValue=100;
    }

    // Friend class declaration
  friend class FriendClass;
};

class FriendClass {
public:
    void display(PrimaryClass& obj) {
        // Accessing private member of PrimaryClass
        cout << "Private Value of PrimaryClass: " << obj.privateValue << endl;
    }
};

int main() {
    PrimaryClass primaryObj;
    FriendClass friendObj;
    friendObj.display(primaryObj);  // Accessing private member through friend class
    
    // cout << friendObj.privateValue;   // Error

    return 0;
}

```
