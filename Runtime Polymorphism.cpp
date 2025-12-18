#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {
        cout << "Shape constructor\n";
    }
    virtual void area() {
        cout << "Area not defined\n";
    }
};

class Rectangle : public Shape {
    int l, b;
public:
    Rectangle(int l, int b) {
        this->l = l;
        this->b = b;
    }
    void area() override {
        cout << "Rectangle Area: " << l * b << endl;
    }
};

class Circle : public Shape {
    int r;
public:
    Circle(int r) {
        this->r = r;
    }
    void area() override {
        cout << "Circle Area: " << 3.14 * r * r << endl;
    }
};

int main() {
    Shape* s;
    Rectangle r(4,5);
    Circle c(3);

    s = &r;
    s->area();

    s = &c;
    s->area();
}
