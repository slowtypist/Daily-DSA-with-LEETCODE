#include<iostream>
using namespace std;
void print(int x ,  int y){
    if(x>y)
    {
        return;
    }
    print(x+1 , y);
    cout<<x;
}
int main()
{
    int n ; cin>>n;
    print(1,n);
    return 0;
}
