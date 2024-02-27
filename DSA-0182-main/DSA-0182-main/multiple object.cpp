#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c1(5.0);
    Circle c2(7.0);

    std::cout << "Area of Circle 1: " << c1.calculateArea() << std::endl;
    std::cout << "Area of Circle 2: " << c2.calculateArea() << std::endl;

    return 0;
}

