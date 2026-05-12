#include<iostream>
using namespace std;
int sum (int x1, int x2){
    int sum_of_numbers = x1+x2;
    return sum_of_numbers;

}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b);
}
