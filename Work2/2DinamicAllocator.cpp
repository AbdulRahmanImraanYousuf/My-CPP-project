#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    // Prompt the user for dimensions (rows and columns)
    cout << "Enter the number of rows (must not exceed 3): ";
    cin >> rows;
    if (rows <= 0 || rows > 3) {
        cout << "Invalid input. Rows must be between 1 and 3." <<endl;
        return 1;
    }

    cout << "Enter the number of columns (must not exceed): ";
    cin >> columns;
    if (columns <= 0 || columns > 3) {
        cout << "Invalid input. Columns must be between 1 and 3." <<endl;
        return 1;
    }

    // Dynamically allocate a 2D array of doubles
    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[columns];
    }

    //  user inputs
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter value for element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> array[i][j];
        }
    }

    // Output the values of each element
    cout << "Array values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array[i][j] << " ";
        }
        cout <<endl;
    }

    // free memory to avoid leaks
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
