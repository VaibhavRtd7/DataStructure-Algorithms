Abstraction in C++ is a principle of object-oriented programming (OOP) that allows you to focus on what an object does,
without worrying about how it does it. It hides unnecessary implementation details from the user and 
exposes only the necessary functionality through interfaces or abstract classes.

In C++, abstraction is typically achieved using abstract classes (i.e., classes that have at least one pure virtual function).
Key Concepts of Abstraction:

- Abstract Classes: A class is called abstract if it has at least one pure virtual function.
- Pure Virtual Function: A virtual function with no implementation in the base class, declared using the syntax virtual void functionName() = 0;.
- Interfaces: In C++, an abstract class can act as an interface, defining what functions must be implemented by any derived class.


Explanation:---------------

- The class Shape is an abstract class because it has a pure virtual function draw().
- The classes Circle and Rectangle are derived from Shape and must provide an implementation for
the pure virtual function draw(). This ensures that all shapes will have a draw() method, but each shape implements it in its own way.
- You cannot create an object of an abstract class (Shape), but you can have pointers to it that point to objects of derived classes (Circle and Rectangle).

Benefits of Abstraction:

- Separation of Interface and Implementation: Users of a class only need to know the interface (what it can do), not the implementation (how it does it).
- Maintainability: By hiding implementation details, the code becomes easier to manage and modify without affecting the users of the class.
- Flexibility and Extensibility: New types of shapes (like Triangle, Polygon) can be added without changing the code that depends on the Shape interface.

Summary:

Abstraction in C++ hides the complex details of how things work and exposes only what is necessary. 
It is implemented using abstract classes and pure virtual functions, allowing for flexible, maintainable, and extendable designs.
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
