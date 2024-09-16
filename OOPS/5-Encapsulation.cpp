Benefits of Encapsulation:----

- Data Protection: By making the data members private, direct access to them is restricted, protecting the integrity of the data.
- Code Maintainability: Changes to the internal implementation (e.g., modifying how data is stored or validated) can be made
- without affecting the code that uses the class.

- Flexibility and Control: You can enforce certain rules for how the data is accessed or modified (like adding validation in setter methods).
- Modularity: The class is self-contained and modular, making it easier to debug, test, and maintain.

Summary:

Encapsulation in C++ involves bundling data and functions into a class and controlling access to that data through public methods.
It provides security, reduces complexity, 
and helps in building maintainable and modular code. The core idea is to expose only what is necessary and hide the rest.

------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Employee {
private:
    // Private member variables (data)
    string name;
    int age;
    double salary;

public:
    
    Employee(string empName, int empAge, double empSalary) {
        name = empName;
        age = empAge;
        salary = empSalary;
    }

    // Public method to set employee's name (Setter)
    void setName(string empName) {
        name = empName;
    }

    // Public method to get employee's name (Getter)
    string getName() {
        return name;
    }

    // Public method to set employee's age (Setter)
    void setAge(int empAge) {
        if (empAge > 0) {  // Validation inside method
            age = empAge;
        } else {
            cout << "Invalid age" << endl;
        }
    }

    // Public method to get employee's age (Getter)
    int getAge() {
        return age;
    }

    // Public method to display employee information
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

int main() {
    // Creating an Employee object
    Employee emp1("John Doe", 30, 50000);

    // Accessing and modifying data through public methods (getters/setters)
    emp1.setName("Jane Doe");
    emp1.setAge(35);

    // Displaying employee information using public method
    emp1.displayInfo();  // Output: Name: Jane Doe, Age: 35, Salary: 50000

    return 0;
}
