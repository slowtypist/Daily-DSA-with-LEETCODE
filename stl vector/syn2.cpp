#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back (10);
    vec.push_back (20); 
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(60);
    cout<< " the elemnets are :";   // too peint all tthe elemnest of the vector that is an dynamic  array
    for (int val: vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    vec.pop_back();
    cout<< "the elemenst are: ";
    for(int val : vec)
    {
        cout<<val<<" ";
    }
}
