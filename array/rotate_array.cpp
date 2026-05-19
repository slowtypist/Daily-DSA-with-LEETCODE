#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {8,9,7,6,5,4};
    int temp[6];
    temp[0] = arr[5];
    for(int i = 0 ; i<=4 ; i++)
    {
        temp[i+1] = arr[i];
    }
    for(int i = 0; i < 6; i++)
    {
        cout << temp[i] << " ";
    }


    return 0;
}
