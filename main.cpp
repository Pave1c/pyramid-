#include <iostream>

int main() {
    int rows;

    // Ask the user for the number of rows
    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> rows;

    // Generate the pyramid
    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int j = i; j < rows; ++j) {
            std::cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); ++k) {
            std::cout << "*";
        }
        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
