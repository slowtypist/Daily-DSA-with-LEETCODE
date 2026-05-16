#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int rem ;
    int final = 0;
    while(n>0)
    {
        rem =  n%10;
        n = n/10;
        final= rem;
        cout<< final;

    }
    return 0;
}
