#include<iostream>
using namespace std;
void fun( int x, int y)//formal parametr 
{ 
    cout <<"address of fun x "<<&x<<endl;
    cout <<"address of fun y "<<&y<<endl;
 }

int main (){
    int x=3;
    int y=4;
    cout <<"address of main x "<<&x<<endl;
    cout <<"address of main y "<<&y<<endl;//actual parametr

}