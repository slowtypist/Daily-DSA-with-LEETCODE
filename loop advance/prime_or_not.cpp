#include<iostream>
using namespace std;
int main()
{
  int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int count ;
    for (count = 2; count <n ; count++)  
    {
        if(n%count==0)
        {
            cout<<n<<" is not a prime number."<<endl;
            break;
        }
    }
}

