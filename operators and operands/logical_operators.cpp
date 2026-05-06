#include<iostream>
using namespace std;
int main()
{
    int a ;
    int b ;
    int c;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    cout<<"enter the third number";
    cin>>c;
    if( a>b && a>c)
    cout<<"first numbber is the greatest "<<endl;
   if( b>a && b>c)
    cout<<"second numbber is the greatest "<<endl;
    if( c>a && c>b)
    cout<<"third numbber is the greatest "<<endl;
    
    
}