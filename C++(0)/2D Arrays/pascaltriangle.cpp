#include <iostream>
using namespace std;

// Function to calculate and print Pascal's Triangle
void printPascalTriangle(int n) {
    for (int line = 1; line <= n; line++) {
        int C = 1;  // Initialize C for the first value in the row

        // Print spaces for alignment
        for (int space = 1; space <= n - line; space++) {
            cout << " ";
        }

        for (int i = 1; i <= line; i++) {
            cout << C << " ";
            C = C * (line - i) / i;  // Calculate next value using the previous value
        }

        cout << endl;  // Move to the next line for the next row
    }
}

int main() {
    int n;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    printPascalTriangle(n);

    return 0;
}
