#include<iostream>
using namespace std;
int main()
{
    for (int row = 1 ; row <= 4 ; row++)
    {
        for (int col = 1 ; col <= row ; col++)
        {
            cout<<"*";
        }
        for (int col = 1 ; col <= 8 - (2*row); col++)
        {
            cout<<" ";
        }
         for (int col = 1 ; col <= row ; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int row = 1 ; row<= 3; row ++)
    {
        for (int col = 1 ; col<= (8-(2*row))/2 ; col++)
        {
            cout<<"*";
        }
        for(int col = 1 ; col <= 2*row ; col++)
        {
            cout<<" ";
        }
         for (int col = 1 ; col<= (8-(2*row))/2 ; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}