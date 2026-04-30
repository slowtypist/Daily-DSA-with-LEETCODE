#include<iostream>
using namespace std;
int main()
{
    int n;
    int count;
    int power;
    int result = 1; //because if not done equal to 1 it will contain garbage value 
    cout<<"enter the number: ";
    cin>>n;
    cout<<"enter the power: ";
    cin>>power;
    for(count = 1; count <= power ; count++)
    {
        result = result * n;
       
    }
    cout<<result<<endl;
}
