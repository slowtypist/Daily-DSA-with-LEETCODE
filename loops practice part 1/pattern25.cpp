#include<iostream>
using namespace std;
int main()
{
    for (int row = 1 ; row<= 5 ; row++)
    {
        for (int col = 1 ; col<= 5-row ; col++)
        {
            cout<<" ";
        }
        for(int col = 0 ; col <row ; col++)
        {
            char alphabet = 'A'+col;
            cout<<alphabet;
        }
        cout<<endl;
    }
}
