# Complex Number Operator Overloading in C++

## Overview

This program demonstrates operator overloading in C++ using a `Complex` class. The `+` operator is overloaded to allow addition of two complex numbers directly using the `+` symbol. 

## Features

- **Complex Number Representation**: Stores real and imaginary parts.
- **Operator Overloading**: Overloads the `+` operator to add two complex numbers.
- **Display Functionality**: Prints complex numbers in a user-friendly format.

## Code Explanation

### Class Definition: `Complex`

- **Data Members**:
  - `int real, imag`: Represent the real and imaginary parts of the complex number.
  
- **Constructor**: 
  - `Complex(int r=0, int i=0)`: Initializes the complex number with real and imaginary values.

- **Operator Overloading (`operator+`)**:
  - `Complex operator+(Complex const& obj)`: 
   Operator Overloading:

The operator+ function is overloaded to enable adding two Complex objects using the + operator.

- Accepts another Complex object (obj) as a parameter.
- Creates a new Complex object ans to store the result.
- Adds the real and imag values of the current object and obj, storing them in ans.
- Returns the resulting Complex object ans.

- **`print()` Function**: 
  - Displays the complex number in the format `real + i imag`.

### How to Run the Code

1. Compile and run the code.
2. The output will display the sum of the two complex numbers, showing both the real and imaginary parts.

### Example

For input complex numbers `c1 = 8 + i2` and `c2 = 4 + i3`:
- **Output**: `12 + i5`

## Key Concepts

- **Operator Overloading**: Allows custom definitions for operators with class objects.
- **Complex Number Arithmetic**: Demonstrates arithmetic using custom data types.

---

This README provides an overview of the purpose and usage of the `Complex` class and its operator overloading capabilities.
