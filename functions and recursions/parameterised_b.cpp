#include<iostream>
using namespace std;
int sum = 0;
int print(int a , int b)
{
if(a>b){
    cout<<sum;
return sum;}
sum = sum+a;
print(a+1,b);
}
int main()
{
    int n;
    cin>>n;
    print(1,n);
    return 0;
}
