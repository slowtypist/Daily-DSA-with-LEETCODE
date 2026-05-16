#include<iostream>
using namespace std;
void print(int x ,  int y){
    if(x<1)
    {
        return;
    }
    print(x-1, y);
    cout<<x;
}
int main()
{
    int n ; cin>>n;
    print(n,n);
    return 0;
}
