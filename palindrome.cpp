#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout << "enter the number: ";
    cin >> num;
    int rem;
    int ans =0 ;
    int ans2 = num;
    while (num>0)
    {
        rem = num%10;
        num = num/10;
        ans = ans*10+rem;
        
    }
    if(ans==ans2)
        {
            cout<<"palindrome";
           
        }
        
        else
        {
            cout<<"not";
            
        }

}
