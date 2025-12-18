#include <iostream>
using namespace std;

class Bank {
public:
    Bank() {
        cout << "Bank Account Created\n";
    }
    virtual void interest() {
        cout << "No interest\n";
    }
};

class SBI : public Bank {
public:
    void interest() override {
        cout << "SBI Interest: 5%\n";
    }
};

class HDFC : public Bank {
public:
    void interest() override {
        cout << "HDFC Interest: 6%\n";
    }
};

int main() {
    Bank* b;
    SBI s;
    HDFC h;

    b = &s;
    b->interest();

    b = &h;
    b->interest();
}
