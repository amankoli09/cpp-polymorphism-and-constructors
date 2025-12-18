#include <iostream>
using namespace std;

class Calculator {
public:
    Calculator() {
        cout << "Calculator Ready\n";
    }

    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;
    cout << c.add(5, 3) << endl;
    cout << c.add(2.5, 3.4) << endl;
}
