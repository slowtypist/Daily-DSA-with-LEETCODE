#include<iostream>
using namespace std;
int main()
{
    for (int row = 0 ; row <=4 ; row ++)
    {
        for (int col1 = 1 ; col1 <= 4-row ; col1++)
        { 
            cout<<" ";
        }
        for (char col2 = 'A' ; col2<='A'+row ; col2++)
        {
            cout<<col2;
        }
        cout<<endl;
    }


}