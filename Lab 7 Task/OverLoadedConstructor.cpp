// using include guards
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(); // Default constructor
    Rectangle(double len, double wid); // Overloaded constructor
    ~Rectangle(); // Destructor 
    void setLength(double len); // Accessor method for length
    void setWidth(double wid); 
    double getLength() const; // Accessor method to retrieve length
    double getWidth() const;
    double calculateArea() const; // Calculate area
};

#endif 

//Implementation file

Rectangle::Rectangle() : length(0.0), width(0.0) {}

Rectangle::Rectangle(double len, double wid) : length(len), width(wid) {}

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
    // Create a rectangle using the default constructor
    Rectangle myRectangle1;

    // Input from user for the second rectangle
    double Length, Width;
    cout << "Enter the length of the second rectangle: ";
    cin >> Length;
    cout << "Enter the width of the second rectangle: ";
    cin >> Width;

    // Create a rectangle using the overloaded constructor
    Rectangle myRectangle2(Length, Width);

    // Calculate and display area for both rectangles
    double area1 = myRectangle1.calculateArea();
    double area2 = myRectangle2.calculateArea();

    cout << "Area of the first rectangle: " << area1 << endl;
    cout << "Area of the second rectangle: " << area2 <<endl;

    return 0;
}




