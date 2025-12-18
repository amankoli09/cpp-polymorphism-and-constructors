#include <iostream>
using namespace std;

class Operation {
public:
    Operation() {
        cout << "Operation class\n";
    }
    virtual int calculate(int a, int b) {
        return 0;
    }
};

class Add : public Operation {
public:
    int calculate(int a, int b) override {
        return a + b;
    }
};

class Multiply : public Operation {
public:
    int calculate(int a, int b) override {
        return a * b;
    }
};

int main() {
    Operation* op;
    Add a;
    Multiply m;

    op = &a;
    cout << "Addition: " << op->calculate(4,5) << endl;

    op = &m;
    cout << "Multiplication: " << op->calculate(4,5) << endl;
}
