#include <iostream>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
      if (n % i == 0)
      {
        return 0;
      }
      
    }
    return 1;
}

int factorial(int x)
{
  int product = 1;
  for(int i = x ; i>=1 ; i--)
  {
    product=product*i;

  }
  return product;
}

int main(){
  int a,b; 
  cout<<"enter the number: ";
  cin>>a>>b;
  cout<<prime(a)<<endl;
  cout<<factorial(a)<<endl;
  cout<<prime(b)<<endl;
  cout<<factorial(b)<<endl;
}
