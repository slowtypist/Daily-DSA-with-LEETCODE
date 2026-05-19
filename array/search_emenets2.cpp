#include<iostream>
using namespace std;

int main()
{
    int num;
    int index = -1;
    cin>>num;
    int arr[6];
    for(int i = 0 ; i<6; i++)
    {
        cin>>arr[i];
    }
    for(int j = 0 ; j<6;j++)
    {
        if(arr[j]==num)
        {
            index = j;
            break;
        }
   
    }
    cout<<index;
    return 0;
}
