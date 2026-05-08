#include<iostream>
using namespace std;
int main()
{
    for (int row = 0 ; row < 5 ; row++)
    { 
        for(int col = 1 ; col<= 5 ; col++)
        {
            char alphabet = 'a'+row;
            cout<<alphabet<<" ";
        }
        cout<<endl;

    }
}
