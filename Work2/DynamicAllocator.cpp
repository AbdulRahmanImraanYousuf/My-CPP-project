#include <iostream>
#include <string>
using namespace std;

int main() {
    // to allocate an integer NEW INT; is used when dynamically allocating the variable while NULLPTR; is used just initializing the pointer
    int* dynamicInt = new int;

    // to allocate a string
    string* dynamicString = new string;

    // user input
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    cout << "Enter a string value: ";
    cin.ignore(); //ensures that the buffer is clear before getting into the next line using getline() 
    getline(cin, *dynamicString);


    cout << "Dynamically allocated integer value: " << *dynamicInt <<endl;
    cout << "Dynamically allocated string value: " << *dynamicString <<endl;

    // free memory to avoid memory leaks
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
