#include <iostream>
#include <cmath> // For mathematical functions (e.g., pow, sqrt)
using namespace std;


namespace shapes {

    // Square class
    class Square {
    private:
        double sideLength;

    public:
        // Accessor method for side length
        double getSideLength() const {
            return sideLength;
        }

        // Default constructor
        Square() : sideLength(0.0) {}

        // Overloaded constructor
        explicit Square(double side) : sideLength(side) {}

        // Destructor
        ~Square() {
            cout << "Square destructor called." <<endl;
        }
    };

    // Triangle class
    class Triangle {
    private:
        double base;
        double height;

    public:
        // Accessor methods for base and height
        double getBase() const {
            return base;
        }

        double getHeight() const {
            return height;
        }

        // Default constructor
        Triangle() : base(0.0), height(0.0) {}

        // Overloaded constructor
        Triangle(double b, double h) : base(b), height(h) {}

        // Destructor
        ~Triangle() {
            cout << "Triangle destructor called." <<endl;
        }
    };

    // Circle class
    class Circle {
    private:
        double radius;

    public:
        // Accessor method for radius
        double getRadius() const {
            return radius;
        }

        // Default constructor
        Circle() : radius(0.0) {}

        // Overloaded constructor
        explicit Circle(double r) : radius(r) {}

        // Destructor
        ~Circle() {
           cout << "Circle destructor called." <<endl;
        }
    };

    class Area {
    public:
        // Calculate the area of a square
        static double calculateSquareArea(const Square& square) {
            return square.getSideLength() * square.getSideLength();
        }

        // Calculate the area of a triangle
        static double calculateTriangleArea(const Triangle& triangle) {
            return 0.5 * triangle.getBase() * triangle.getHeight();
        }

        // Calculate the area of a circle
        static double calculateCircleArea(const Circle& circle) {
            return 3.14159 * pow(circle.getRadius(), 2);
        }
    };
}

int main() {
    char choice;
    do {
        cout << "Select an option:" <<endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" <<endl;
        cout << "3. Calculate the area of a circle" <<endl;
        cout << "4. Quit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                shapes::Square square(side);
                cout << "Area of the square: " << shapes::Area::calculateSquareArea(square) <<endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                shapes::Triangle triangle(base, height);
                cout << "Area of the triangle: " << shapes::Area::calculateTriangleArea(triangle) <<endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                shapes::Circle circle(radius);
                cout << "Area of the circle: " << shapes::Area::calculateCircleArea(circle) <<endl;
                break;
            }
            case '4':
                cout << "Exited....please enjoy yuor day or re-run the programm!" <<endl;
                break;
            default:
                cout << "Invalid choice. Please try again." <<endl;
        }
    } while (choice != '4');

    return 0;
}