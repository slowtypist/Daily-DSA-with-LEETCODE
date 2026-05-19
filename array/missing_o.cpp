#include<iostream>
using namespace std;

int main()
{
    int arr[6];
    for(int i = 0 ; i<6;i++)
    {
        cin>>arr[i];
    }
    int sum1 = 0;
    for(int j = 0; j<6;j++)
    {
        sum1 = arr[j]+sum1;
    }
    int n;
    cin>>n;
    int sum2 = 0;
    for(int k = 1; k<=n; k++)
    {
        sum2= k+sum2;
    }

    int final = sum1-sum2;
    cout<<final;
    return 0;
}
