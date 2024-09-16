

Abstraction in C++ is a principle of object-oriented programming (OOP) that allows you to focus on what an object does,
without worrying about how it does it. It hides unnecessary implementation details from the user and 
exposes only the necessary functionality through interfaces or abstract classes.

In C++, abstraction is typically achieved using abstract classes (i.e., classes that have at least one pure virtual function).
Key Concepts of Abstraction:

- Abstract Classes: A class is called abstract if it has at least one pure virtual function.
- Pure Virtual Function: A virtual function with no implementation in the base class, declared using the syntax virtual void functionName() = 0;.
- Interfaces: In C++, an abstract class can act as an interface, defining what functions must be implemented by any derived class.

------------------------------------------------------------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;

// Abstract class (interface)
class Shape {
public:
  // Pure virtual function, making this an abstract class
  virtual void draw() = 0;

  // Regular member function
  void info() {
      cout << "This is a shape" << endl;
  }
};

// Derived class 1: Implements the draw method
class Circle : public Shape {
public:
  void draw() override {
      cout << "Drawing a circle" << endl;
  }
};

// Derived class 2: Implements the draw method
class Rectangle : public Shape {
public:
  void draw() override {
      cout << "Drawing a rectangle" << endl;
  }
};

int main() {
  // You cannot create an object of abstract class
  // Shape shape; // This would cause a compile error

  Shape* shape1 = new Circle();
  Shape* shape2 = new Rectangle();

  shape1->draw();  // Calls Circle's draw
  shape2->draw();  // Calls Rectangle's draw

  shape1->info();  // Calls the common info method
  shape2->info();  // Calls the common info method

  delete shape1;
  delete shape2;

  return 0;
}
