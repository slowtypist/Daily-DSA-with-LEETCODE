#include<iostream>
using namespace std;
int main()
{
   int last = 0;
   int prev = 1;
   int current = 1;
   int n;
    cout<<"enter the limit : "<<endl;
     cin>>n;
     int count;
     for(count = 1; count<=n ; count = count+1)
     {
          cout<<current<<endl;
          last = prev;
          prev = current;
          current = last + prev;
     }
   
}