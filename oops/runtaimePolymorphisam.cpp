#include <bits/stdc++.h>

using namespace std;

class Shape {
public:
    virtual double area() const {
        cout << "Base Shape area() has been called." << endl;
        return 0;
    }
};

class Circle : public Shape {
public:
    double radius;

    Circle(double r) : radius(r) {}

    double area() const override {
        cout << "Circle area called" << endl;  // Corrected message
        return M_PI * radius * radius;
    }
};

int main() {
    Circle c(10.0);

    // Uncommented code for demonstrating polymorphism
    Shape* shapePtr = &c; 
    cout << "Area through pointer: " << shapePtr->area() << endl; 

    // Direct call, will call the Circle area() function directly
    cout << "Direct call area: " << c.area() << endl;

    return 0;
}

