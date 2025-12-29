#include <iostream>
using namespace std;

class Calculator
{
public:
    Calculator()
    {
        cout << "This is the simple calculator" << endl;
    }

    int add(int a, int b)
    {
        return a + b;
    }

    double add1(int a, int b)
    {
        return a + b;
    }

    float add2(int a, int b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }
};

int main()
{
    Calculator obj1;
    int x, y;

    cout << "Enter the value of x: " << endl;
    cin >> x;

    cout << "Enter the value of y: " << endl;
    cin >> y;

    cout << "The addition of x and y is: " << obj1.add(x, y) << endl;
    cout << "The double addition of x and y is: " << obj1.add1(x, y) << endl;
    cout << "The float addition of x and y is: " << obj1.add2(x, y) << endl;
    cout << "The subtraction of x and y is: " << obj1.sub(x, y) << endl;

    return 0;
}
