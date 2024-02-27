#include <iostream>
class CubeDisplay {
public:
    CubeDisplay(int n) : limit(n) {}
    void displayCubes() {
        for (int i = 1; i <= limit; ++i) {
            std::cout << "Cube of " << i << " is: " << i * i * i << std::endl;
        }
    }
private:
    int limit;
};
int main() {
    int userInput;
    std::cout << "Enter an integer: ";
    std::cin >> userInput;
    CubeDisplay cubeDisplay(userInput);
    cubeDisplay.displayCubes();
    return 0;
}

