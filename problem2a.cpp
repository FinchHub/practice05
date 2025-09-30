#include <iostream>
#include <limits>
#include <limits>

// Not sure if this checkValue function is really a best practice but tried it
// anyways since the goal is to practice templates. Please let me know if there
// are better ways to do this!

template <typename T>
bool checkValues(T& value) {
   if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid value. Enter a number." << std::endl;
    }
   return 1; 
}

int main() {
    double valueOne;
    double valueTwo;
    char operation;

    std::cout << "Enter first number: ";
    while (!(std::cin >> valueOne)) {
    checkValues(valueOne);
    std::cout << "Enter first number: ";
    }

    std::cout << "Enter second number: ";
    std::cin >> valueTwo;
    checkValues(valueTwo);

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;

   if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid value." << std::endl;
    }

}

