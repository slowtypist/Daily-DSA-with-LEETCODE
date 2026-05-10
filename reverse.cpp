#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int number = 5421;
    int rem ;
    int ans = 0;
    int i = 3;
    while( number >0 )
    {
        rem = number%10;
        number=number/10;
        ans = number*pow(10,i)+ans;
        i--;
        cout<<rem;

    }
}
    //this is with the use of cmath header file and here we know from where i should be initialised
