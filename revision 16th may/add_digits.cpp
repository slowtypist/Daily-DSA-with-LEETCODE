#include<iostream>
using namespace std;

int main()
{
    int n ; 
    cout<<"enter the number";
    cin>>n;
    int rem ; int sum = 0 ;
    while(n>0)
    {
        rem = n%10;
        n = n/10;
        sum = sum+rem;

    }
    cout<<sum;
    return 0;
}
