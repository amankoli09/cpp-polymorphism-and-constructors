#include <iostream>
using namespace std;

class Solid {
public:
    Solid() {
        cout << "Solid object\n";
    }
    virtual void volume() {
        cout << "Volume not defined\n";
    }
};

class Cube : public Solid {
    int s;
public:
    Cube(int s) {
        this->s = s;
    }
    void volume() override {
        cout << "Cube Volume: " << s*s*s << endl;
    }
};

int main() {
    Solid* s;
    Cube c(4);
    s = &c;
    s->volume();
}
