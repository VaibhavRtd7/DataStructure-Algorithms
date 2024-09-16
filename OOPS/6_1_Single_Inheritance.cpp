#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {  // Inherits from Animal
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog myDog;

    // Access base class method
    myDog.eat();  // Output: This animal is eating.

    // Access derived class method
    myDog.bark();  // Output: The dog is barking.

    return 0;
}
