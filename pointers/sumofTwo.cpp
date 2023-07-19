#include<iostream>
using namespace std ;
int main()
{
    //int x = 6;
    //int y = 7;
    //int*p1 = &x;
    //int*p2 = &y;
    //cout<<*p1 + *p2;
    int x,y;
    int *p1 = x;
    int *p2 = y;
    cout<<"enter the first no."<<endl;
    cin>>*p1;
    cout<<"enter the second no."<<endl;
    cin>> *p2;
    cout<< *p1 + *p2; 
}