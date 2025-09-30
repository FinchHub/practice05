#include <ios>
#include <iostream>
#include <limits>
#include <list>

int main() {
    int input;
   
    while (true) {
        std::cout << "1. Add a Task\n"
                  << "2. Remove a Task\n"
                  << "3. Show Tasks\n"
                  << "4. Exit\n"
                  << "Choice: ";
        std::cin >> input;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   
            std::cout << "Invalid input. Select '1', '2', '3', or '4'.\n";
        } else if (input == 1) {
            
        } else if (input == 2) {

        } else if (input == 3) {

        } else if (input == 4) {
            break;
        } else {
            std::cout << "Invalid input. Select '1', '2', '3', or '4'.\n";
        }
    }

}
