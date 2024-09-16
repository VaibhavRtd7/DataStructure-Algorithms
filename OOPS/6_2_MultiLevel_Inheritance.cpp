#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void fuel() {
        cout << "Filling fuel." << endl;
    }
};

// Derived class from Vehicle
class Car : public Vehicle {
public:
    void start() {
        cout << "Car started." << endl;
    }
};

// Derived class from Car
class SportsCar : public Car {
public:
    void turbo() {
        cout << "Turbo mode activated." << endl;
    }
};

int main() {
    SportsCar myCar;

    // Access methods from Vehicle, Car, and SportsCar
    myCar.fuel();    // From Vehicle class
    myCar.start();   // From Car class
    myCar.turbo();   // From SportsCar class

    return 0;
}
