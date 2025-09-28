#include <iostream>
#include <limits>

double convertTemperature(double temp, char scale = 'F');

int main(){
    while (true) {
        int option;
        double temp;
        std::cout << "1. Convert Celsius to Fahrenheit\n"
                  << "2. Convert Fahrenheit to Celsius\n"
                  << "3. Exit\n"
                  << "Choose an option: ";
        std::cin >> option;

        if (std::cin.fail() || option < 1 || option > 3) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid option. Select '1' or '2'.\n";
        } else if ( option == 3 ) {
            return 0;
        }

        std::cout << "Enter temperature: ";
        std::cin >> temp;

         if ( option == 1 ) {
            std::cout << "Converted: " << convertTemperature(temp, option = 'C') << "°F\n";
        } else if ( option == 2 ) {
            std::cout << "Converted: " << convertTemperature(temp, option = 'F') << "°C\n";
        } 
    }        
    return 0;
}

double convertTemperature(double temp, char scale) {
    if (scale == 'C') {
        return ((temp * 1.8) + 32);
    } else if (scale == 'F') {
        return ((.5555555556)*(temp - 32));
    }
    return 0;
}

