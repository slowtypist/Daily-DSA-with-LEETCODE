#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int j = 0 ; j<5;j++)
    {
        cin>>arr[j];
    }
    int ans = arr[0];
    for(int i = 0 ; i<5; i++)
    {
        if(arr[i]<ans)
        {
            ans = arr[i];
        }
        
    }
    cout<<ans;
    return 0;
}
