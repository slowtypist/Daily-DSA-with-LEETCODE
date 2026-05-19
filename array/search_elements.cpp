#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int arr[5];
    for(int j = 0 ; j <5 ; j++)
    {
        cin>>arr[j];
    }
    for(int i = 0 ; i<5 ; i++)
    {
        if(arr[i]==num)
        {
            cout<<i;
            break;
        }
        
    }
    return 0;

}
