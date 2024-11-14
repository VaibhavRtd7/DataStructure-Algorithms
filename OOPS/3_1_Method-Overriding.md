# Polymorphism in C++

## Overview

### 1. Method Overloadig in polymorphism. (Compile time poly.)
### 2. Operator Overloadig in polymorphism. (Compile time poly.)
### 3. Method Overriding in polymorphism. (Runtime poly.)

1. and 2. mention above.
   
## 3. Method Overriding in polymorphism.
This program demonstrates **polymorphism** in C++ through a base class `Animal` and derived classes `Dog` and `Cat`.
 The base class defines a `sound` method that is overridden in each derived class. By using a pointer of type `Animal` and
pointing it to a `Cat` object, we can dynamically call the `Cat` class's `sound` method, showcasing runtime polymorphism.

### code snippet

- `Animal* animalPtr;` — Declares a pointer `animalPtr` of type `Animal`.
- `Cat cat;` — Creates an object `cat` of type `Cat`.
- `animalPtr = &cat;` — Points `animalPtr` to the `cat` object.
- `animalPtr->sound();` — Calls Cat's `sound()` due to the `virtual` keyword in `Animal`.

## Code Explanation

```cpp
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
    animalPtr->sound();   // Outputs: "Cat Mews"
    
    return 0;
}
