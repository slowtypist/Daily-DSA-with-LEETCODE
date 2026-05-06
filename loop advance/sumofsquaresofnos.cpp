#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the limit : "<<endl;
    cin>>n;
    int sum = 0;
    for(int count = 1; count<=n ; count = count+1)
    {
        sum = sum + count * count;
    }
    cout<<sum<<endl;
}