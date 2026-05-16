#include<iostream>
using namespace std;

int main()
{
    int n ; 
    cin>>n;
    int product = 1; 
    int squareroot;
    for(int i = 1; i<=n;i++)
    {
        product = i*i;
        if (product>n)
        {
            squareroot = i-1;
            break;
        }

        
    }
    cout<<squareroot;
    return 0;
}
