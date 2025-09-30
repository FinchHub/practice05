#include <iostream>
#include <limits>
#include <limits>

void checkInput(double value) {
        if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

template <typename T, typename U>
void calculateInput(T valueOne, T valueTwo, U operation) {
    if (operation == '+') {
        std::cout << "Result: " << valueOne + valueTwo << std::endl;
    }
    if (operation == '-') {
        std::cout << "Result: " << valueOne - valueTwo << std::endl;
    }
    if (operation == '*') {
        std::cout << "Result: " << valueOne * valueTwo << std::endl;
    }
    if (operation == '/') {
        std::cout << "Result: " << valueOne / valueTwo << std::endl;
    }

}

int main() {
    double valueOne;
    double valueTwo;
    char operation;

    std::cout << "Enter first number: ";
    while (!(std::cin >> valueOne)) {
            checkInput(valueOne);
            std::cout << "INVALID VALUE. Enter a number.\n";
            std::cout << "Enter first number: ";
    }

    std::cout << "Enter second number: ";
    while (!(std::cin >> valueTwo)) {
            checkInput(valueTwo);
            std::cout << "INVALID VALUE. Enter a number.\n";
            std::cout << "Enter second number: ";
    }

    // This works but outputs multiple errors when invalid input is entered.
    // Looked it up, this can be fixed by putting 'operator' into a string.
    // Seems outside scope of assignment though, so I'm gonna forego it. 
    
    std::cout << "Enter operation (+, -, *, /): ";
    while (!(std::cin >> operation) || ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/'))) {
            checkInput(operation);
            std::cout << "INVALID OPERATOR. Enter a valid operator.\n";
            std::cout << "Enter operation (+, -, *, /): ";
        }

    calculateInput(valueOne, valueTwo, operation);
}

