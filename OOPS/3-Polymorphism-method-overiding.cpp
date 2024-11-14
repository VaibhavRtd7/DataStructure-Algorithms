Some Key Points About Virtual Functions:

- Virtual functions are Dynamic in nature. 
- They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and 
   overridden in a child class
- A virtual function is called during Runtime


#include <iostream>
using namespace std;

class Animal {
    public :
    virtual void sound() {
        cout << "Animal makes sound !!" << endl;
    }
};

class Dog : public Animal {
    public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
    public:
    void sound() override {
        cout << "Cat Mews" << endl;
    }
};

int main() {
    
    Animal* animalPtr;
    Cat cat;
    
    animalPtr = &cat;
    animalPtr->sound();   // Cat Mews
    
    // If we not used virtual and override keyowrd then 
    // animalPtr->sound();   // Animal makes sound !!
    
    return 0;
}
