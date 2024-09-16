#include <iostream>
using namespace std;

class Person {
public:
    void speak() {
        cout << "Person is speaking" << endl;
    }
};

class Worker {
public:
    void work() {
        cout << "Worker is working" << endl;
    }
};

// Derived class inheriting from both Person and Worker
class Manager : public Person, public Worker {
public:
    void manage() {
        cout << "Manager is managing" << endl;
    }
};

int main() {
    Manager mgr;
    mgr.speak();   // From Person class
    mgr.work();    // From Worker class
    mgr.manage();  // From Manager class

    return 0;
}
