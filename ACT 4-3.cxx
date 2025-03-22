//Danniel A. Placido
//BSIT-1R

#include <iostream>

int main() {
    double num1, num2, num3;

    // Input three numbers
    std::cout << "22,26,18: ";
    std::cin >> num1 >> num2 >> num3;

    // Determine the largest number
    double largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Output the largest number
    std::cout << "26: " << largest << std::endl;

    return 0;
}