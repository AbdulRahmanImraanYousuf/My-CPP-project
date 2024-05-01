#include <iostream>
#include <string>

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    std::string* dynamicString = new std::string;

    // Prompt the user for input
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInt;

    std::cout << "Enter a string value: ";
    std::cin.ignore(); // Clear newline character from previous input
    std::getline(std::cin, *dynamicString);

    // Output the values
    std::cout << "Dynamically allocated integer value: " << *dynamicInt << std::endl;
    std::cout << "Dynamically allocated string value: " << *dynamicString << std::endl;

    // Clean up (free memory)
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
