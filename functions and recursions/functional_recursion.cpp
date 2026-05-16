#include<iostream>
using namespace std;
int print(int x)
{
    if(x==0)
    {
        return 0;

    }
    return x+print(x-1);

}
int main()
{
  
    int n ; cin>>n;
    cout<<print(n);
  

    return 0;
}
