#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
    virtual double area() = 0;
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() override {
        return 0.5 * base * height;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }
};


class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {} 

    
};

int main() {
    Shape* shape;

    double base, height, length, width, side;

    
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    shape = new Triangle(base, height);
    cout << "Area of Triangle: " << shape->area() << endl;
    delete shape;

    
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    shape = new Rectangle(length, width);
    cout << "Area of Rectangle: " << shape->area() << endl;
    delete shape;

    
    cout << "Enter side of square: ";
    cin >> side;
    shape = new Square(side);
    cout << "Area of Square: " << shape->area() << endl;
    delete shape;

    return 0;
}
