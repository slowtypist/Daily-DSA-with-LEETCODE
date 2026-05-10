#include<iostream>
using namespace std;
int main()
{
    int number = 372;
    int rem ;
    int ans = 0;
    while( number >0 )
    {
        rem = number%10;
        number=number/10;
        ans = ans+rem;
    }
    cout<<ans;
}
