#include<iostream>
using namespace std;

int main()
{
    int arr[7];
    for(int x=0;x<7;x++)
    {
        cin>>arr[x];
    }
    int second_max=-1;
    int max = -1;
    int i =0;
    while(i<7){
        if(arr[i]>max){
            max = arr[i];
        }
        i++;
    }
    int k = 0;
    for(int j = 0;j<7;j++){
       
        
            if(arr[j]<max && arr[j]>second_max)
            {
                second_max= arr[j];
            }
        
    }
    cout<<second_max;
    return 0;
}
