#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle Created\n";
    }
    virtual void speed() {
        cout << "Normal speed\n";
    }
};

class Bike : public Vehicle {
public:
    void speed() override {
        cout << "Bike speed: 80 km/h\n";
    }
};

class Car : public Vehicle {
public:
    void speed() override {
        cout << "Car speed: 120 km/h\n";
    }
};

int main() {
    Vehicle* v;
    Bike b;
    Car c;

    v = &b;
    v->speed();

    v = &c;
    v->speed();
}
