#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for ( int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    vector<int> v1;
    v1. push_back(1);
    v1. push_back(6);
    v1. push_back(5);
    v1. push_back(5);
    v1. push_back(14);
    v1. push_back(3);
    
    display(v1);
}