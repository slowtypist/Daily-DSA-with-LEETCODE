#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the input: ";
    cin >> n;

    // Top half
    for (int row = 1; row <= n; row++) {
        // Left stars
        for (int col = 1; col <= (n - row )+ 1; col++) {
            cout << "*";
        }
        // Middle spaces
        for (int col = 1; col <= 2 * (row - 1); col++) {
            cout << " ";
        }
        // Right stars
        for (int col = 1; col <= (n - row + 1); col++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int row = 2; row <= n; row++) {
        // Left stars
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        // Middle spaces
        for (int col = 1; col <= 2 * (n - row); col++) {
            cout << " ";
        }
        // Right stars
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}