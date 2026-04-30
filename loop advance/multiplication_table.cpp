#include<iostream>
using namespace std;
int main()
{
    int n;
    int count;
    cout<<"enter the number: ";
    cin>>n;
    for(count = 1; count <= 10 ; count ++)
    {cout<<count<<" * "<<n<<" = "<<count*n<<endl; }   
}