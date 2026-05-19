#include<iostream>
using namespace std;

int main()
{
    int arr[6];
    for(int x = 0 ; x<6;x++)
    {
        cin>>arr[x];
    }
    int i =0;
    int j = 5;
    while(i<j)
    {
        swap (arr[i],arr[j]);
        i++;
        j--;
    }
    for(i = 0 ; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
