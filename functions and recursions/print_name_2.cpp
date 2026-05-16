#include<iostream>
using namespace std;
void print(int x, int y)
{
if(x>y){
    return;
}
cout<<"mili"<<endl;
x++;
print(x,y);
}
int main()
{
    int n ; 
    cin>>n;
    print(1,n);
    return 0;
}
