#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the number: "<<endl;
    cin>>n;
    int product = 1;
    for(int count = 1; count<=n ; count = count+1)
    {
        product = product * count;
    }
    cout<<product<<endl;
}