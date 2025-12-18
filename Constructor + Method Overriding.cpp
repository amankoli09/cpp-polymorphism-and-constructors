#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person constructor\n";
    }
    virtual void role() {
        cout << "Person role\n";
    }
};

class Student : public Person {
public:
    Student() {
        cout << "Student constructor\n";
    }
    void role() override {
        cout << "Student studies\n";
    }
};

int main() {
    Person* p;
    Student s;
    p = &s;
    p->role();
}
