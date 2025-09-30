#include <ios>
#include <iostream>
#include <limits>
#include <list>

int main() {
    int menuOption;
    int delOption;
    std::list<std::string> tasks = { };
    std::string taskInput;
   
    while (true) {
        std::cout << "1. Add a Task\n"
                  << "2. Remove a Task\n"
                  << "3. Show Tasks\n"
                  << "4. Exit\n"
                  << "Choice: ";
        std::cin >> menuOption;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   
            std::cout << "Invalid input. Select '1', '2', '3', or '4'.\n";
        } else if (menuOption == 1) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   
            std::cout << "Enter task: ";
            std::getline(std::cin, taskInput);
            tasks.push_back(taskInput);
        } else if (menuOption == 2) {
            std::cout << "Select the task to remove: ";
            std::cin >> delOption;
            
            if (delOption < 1 || delOption > tasks.size()) {
                std::cout << "Invalid task number.\n";
            } else {
                //Does this always have to be auto?
                auto it = tasks.begin();
                std::advance(it, delOption - 1);
                tasks.erase(it);

                std::cout << "Task removed.\n";
            }
        } else if (menuOption == 3) {
            for (std::string s : tasks) {
                std::cout << s << "\n";
            }
        } else if (menuOption == 4) {
            break;
        } else {
            std::cout << "Invalid input. Select '1', '2', '3', or '4'.\n";
        }
    }

}
