#include <iostream>
using namespace std;

int main()
{
    // Upper half
    for (int row = 4; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        for (int col = 1; col <= (4 - row) * 2; col++)
        {
            cout << " ";
        }

        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        for (int col = 1; col <= 8 - (2 * row); col++)
        {
            cout << " ";
        }

        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
