#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
};

int main() {
    Calculator calc;
    std::cout << "Addition: " << calc.add(10, 5) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(10, 5) << std::endl;
    return 0;
}

