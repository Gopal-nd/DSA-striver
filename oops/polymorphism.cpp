#include <iostream>
using namespace std;

class Calculator {
    int a, b;

public:
    // 1. Constructor Overloading
    Calculator() {
        a = 0;
        b = 0;
        cout << "Default constructor called: a = " << a << ", b = " << b << endl;
    }

    Calculator(int x) {
        a = x;
        b = 0;
        cout << "Single-parameter constructor called: a = " << a << ", b = " << b << endl;
    }

    Calculator(int x, int y) {
        a = x;
        b = y;
        cout << "Two-parameter constructor called: a = " << a << ", b = " << b << endl;
    }

    // 2. Function Overloading
    int add() {
        return a + b;
    }

    int add(int x, int y) {
        return x + y;
    }

    double add(double x, double y) {
        return x + y;
    }

    // 3. Operator Overloading
    Calculator operator + (const Calculator& obj) {
        Calculator temp;
        temp.a = this->a + obj.a;
        temp.b = this->b + obj.b;
        return temp;
    }

    void display() const {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    // Demonstrating Constructor Overloading
    Calculator calc1;           // Calls default constructor
    Calculator calc2(5);        // Calls single-parameter constructor
    Calculator calc3(10, 20);   // Calls two-parameter constructor

    // Demonstrating Function Overloading
    cout << "\nFunction Overloading Examples:" << endl;
    cout << "calc3.add(): " << calc3.add() << endl;                // Uses add() with no parameters
    cout << "calc3.add(15, 25): " << calc3.add(15, 25) << endl;    // Uses add(int, int)
    cout << "calc3.add(5.5, 3.3): " << calc3.add(5.5, 3.3) << endl; // Uses add(double, double)

    // Demonstrating Operator Overloading
    Calculator calc4 = calc2 + calc3;  // Calls overloaded + operator
    cout << "\nOperator Overloading Result (calc2 + calc3):" << endl;
    calc4.display();

    return 0;
}

