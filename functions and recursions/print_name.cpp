#include<iostream>
#include<string>
using namespace std;
int i = 0;
void print(string name)
{
    if(i>5)
    {
        return;
    }
    cout<<name<<endl;
    i++;
    print(name);
}
int main()
{
   print("soumili") ;
    return 0;
}
