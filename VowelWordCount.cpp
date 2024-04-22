#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to count vowels in a string
int countVowels(const std::string& text) {
    int vowelCount = 0;
    const std::string vowels = "aeiouAEIOU";
    for (char abho : text) {
        if (vowels.find(abho) != std::string::npos) {
            vowelCount++;
        }
    }
    return vowelCount;
}

// Function to count words in a string
int countWords(const std::string& text) {
    int wordCount = 0;
    bool inWord = false;
    for (char abho : text) {
        if (std::isspace(abho)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
    }
    return wordCount;
}

// Function to reverse a string
std::string reverse(const std::string& text) {
    return std::string(text.rbegin(), text.rend());
}

// Function to capitalize the second letter of each word in a string
std::string capitalizeSecondLetter(const std::string& text) {
    std::string result = text;
    for (size_t i = 0; i < result.length(); ++i) {
        if (std::isalpha(result[i]) && (i == 0 || std::isspace(result[i - 1]))) {
            result[i + 1] = std::toupper(result[i + 1]);
        }
    }
    return result;
}

int main() {
    // Open the text file
    std::ifstream file("module_statement.txt");
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    // Read the contents of the file into a string
    std::string fileData((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    // i. Count vowels
    int vowelCount = countVowels(fileData);
    std::cout << "Number of vowels: " << vowelCount << std::endl;

    // ii. Count words
    int wordCount = countWords(fileData);
    std::cout << "Number of words: " << wordCount << std::endl;

    // iii. Reverse statement
    std::string reversedStatement = reverse(fileData);
    std::cout << "Reversed statement: " << reversedStatement << std::endl;

    // iv. Capitalize second letter
    std::string capitalizedStatement = capitalizeSecondLetter(fileData);
    std::cout << "Statement with second letter capitalized: " << capitalizedStatement << std::endl;

    return 0;
}
