#include <iostream>
using namespace std;

class Payment {
public:
    Payment() {
        cout << "Payment initiated\n";
    }
    virtual void pay() = 0; // pure virtual
};

class UPI : public Payment {
public:
    void pay() {
        cout << "Paid using UPI\n";
    }
};

class Card : public Payment {
public:
    void pay() {
        cout << "Paid using Card\n";
    }
};

int main() {
    Payment* p;
    UPI u;
    Card c;

    p = &u;
    p->pay();

    p = &c;
    p->pay();
}
