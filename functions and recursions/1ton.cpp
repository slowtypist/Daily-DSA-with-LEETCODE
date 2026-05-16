#include<iostream>
using namespace std;
void print(int a, int b)
{
    if(a>b)
    {
        return;
    }
    cout<<a;a++;
    print(a,b);

}
int main()
{
    int n; cin>>n;
    print(1,n);
    return 0;
}#include<iostream>
using namespace std;
void print(int a, int b)
{
    if(a>b)
    {
        return;
    }
    cout<<a;a++;
    print(a,b);

}
int main()
{
    int n; cin>>n;
    print(1,n);
    return 0;
}
