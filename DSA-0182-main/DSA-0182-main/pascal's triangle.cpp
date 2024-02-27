#include <iostream>
#include <vector>
std::vector<std::vector<int>> generatePascalsTriangle(int numRows) {
    std::vector<std::vector<int>> triangle;
    if (numRows <= 0) {
        return triangle; // Return empty triangle for invalid input
    }

    triangle.push_back({1}); // First row

    for (int i = 1; i < numRows; ++i) {
        std::vector<int> newRow(i + 1, 1); // Initialize new row with 1s
        for (int j = 1; j < i; ++j) {
            // Calculate values based on the previous row
            newRow[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(newRow); // Add the new row to the triangle
    }

    return triangle;
}
void displayPascalsTriangle(const std::vector<std::vector<int>>& triangle) {
    for (const auto& row : triangle) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}
int main() {
    int numRows;
    std::cout << "Enter the number of rows for Pascal's Triangle: ";
    std::cin >> numRows;

    std::vector<std::vector<int>> pascalsTriangle = generatePascalsTriangle(numRows);

    std::cout << "\nPascal's Triangle:\n";
    displayPascalsTriangle(pascalsTriangle);

    return 0;
}

