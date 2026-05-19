#include<iostream>
using namespace std;

int main()
{
    int arr[6];
    for(int x = 0; x<6;x++)
    {
        cin>>arr[x];
    }
    int temp[6];
    int i = 5;
    int j = 0 ;
    while(i>=0)
    {
        temp[j] = arr[i];
        j++;
        i--;
    }
    i = 0;
    for(j=0;j<6;j++)
    {
        arr[i]=temp[j];
        i++;
    }
for(i = 0; i < 6; i++)
{
    cout << arr[i] << " ";
}
    return 0;
}
