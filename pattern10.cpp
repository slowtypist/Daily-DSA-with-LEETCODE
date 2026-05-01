#include<iostream>
using namespace std;
int main()
{
    int row;
    int col =0 ;
    for (row = 1;row<= 5 ; row++)
    {
        char name = 'a';
        cout<<name<<" ";

        for (col = 1; col <= 4 ; col++)
        {
            
            char result = name + col;
            cout<<result<<" ";
        }
        cout<<endl;
    }
}