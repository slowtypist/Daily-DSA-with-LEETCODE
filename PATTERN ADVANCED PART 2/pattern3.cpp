#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= (row - 1); col++)
        {
            cout <<" ";
        }
        for (int col = 1; col <= 2 * (5 - row) + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}