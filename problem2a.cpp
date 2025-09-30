#include <iostream>
#include <limits>
#include <limits>

// Added a template here but will it work fine if it were just called with (double value)? 
template <typename T>
void cleanValue(T& value) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    double valueOne;
    double valueTwo;
    char operation;

    std::cout << "Enter first number: ";
    while (!(std::cin >> valueOne)) {
        if (std::cin.fail()) {
            cleanValue(valueOne);
            std::cout << "INVALID VALUE. Enter a number.\n";
            std::cout << "Enter first number: ";
        }
    }

    std::cout << "Enter second number: ";
    while (!(std::cin >> valueTwo)) {
        if (std::cin.fail()) {
            cleanValue(valueTwo);
            std::cout << "INVALID VALUE. Enter a number.\n";
            std::cout << "Enter second number: ";
        }
    }

    //DOES NOT WORK
    std::cout << "Enter operation (+, -, *, /): ";
    while (!(std::cin >> operation)) {
        if (!std::cin.fail() && ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/'))) {
            cleanValue(operation);
            std::cout << "INVALID OPERATOR. Enter a valid operator.\n";
            std::cout << "Enter operation (+, -, *, /): ";
        }
    }

    std::cout << "All numbers valid.\n";
}

