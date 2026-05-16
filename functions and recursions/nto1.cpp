#include<iostream>
using namespace std;
void print(int x , int b)
{
    if(x<b)
    {
        return;
    }
    cout<<x;
    x--;
    print(x,b);
}
int main()
{
    int n;
    cin>>n;
    print(n ,1);
    return 0;
}
