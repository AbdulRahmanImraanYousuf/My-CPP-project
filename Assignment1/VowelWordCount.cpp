#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

// Function to count vowels in a string
int countVowels(const string& text) {
    int vowelCount = 0;
    const string vowels = "aeiouAEIOU";
    for (char abho : text) {
        if (vowels.find(abho) != string::npos) {
            vowelCount++;
        }
    }
    return vowelCount;
}

// Function to count words in a string
int countWords(const string& text) {
    int wordCount = 0;
    bool inWord = false;
    for (char abho : text) {
        if (isspace(abho)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
    }
    return wordCount;
}

// Function to reverse a string
string reverse(const string& text) {
    return string(text.rbegin(), text.rend());
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& text) {
    string result = text;
    for (size_t i = 0; i < result.length(); ++i) {
        if (isalpha(result[i]) && (i == 0 || isspace(result[i - 1]))) {
            result[i + 1] = std::toupper(result[i + 1]);
        }
    }
    return result;
}

int main() {
    // Open the text file
    ifstream file("module_statement.txt");
    if (!file.is_open()) {
        cerr << "Error: Unable to open file." <<endl;
        return 1;
    }

    // Read the contents of the file into a string
    string fileData((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    // i Count vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount <<endl;

    //  Count words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount <<endl;

    // Reverse statement
    string reversedStatement = reverse(fileData);
    cout << "Reversed statement: " << reversedStatement << endl;

    // Capitalize second letter
    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Statement with second letter capitalized: " << capitalizedStatement <<endl;

    return 0;
}
