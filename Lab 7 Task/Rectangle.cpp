// using inlude guards
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(); // Default constructor
    ~Rectangle(); // Destructor
    void setLength(double len); // Accessor method for length
    void setWidth(double wid); 
    double getLength() const; // Accessor method to retrieve length
    double getWidth() const;
    double calculateArea() const; // Calculate area
};

#endif

// Rectangle.cpp (Implementation file)

Rectangle::Rectangle() : length(0.0), width(0.0) {}

Rectangle::~Rectangle() {}

void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double wid) {
    width = wid;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::calculateArea() const {
    return length * width;
}

// main.cpp
#include <iostream>
using namespace std;

int main() {
    Rectangle myRectangle;

    
    double Length, Width;
    cout << "Enter the length of the rectangle: ";
    cin >> Length;    // Input from user
    myRectangle.setLength(Length);

    cout << "Enter the width of the rectangle: ";
    cin >> Width;
    myRectangle.setWidth(Width);

    // Calculate and display area
    double area = myRectangle.calculateArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
