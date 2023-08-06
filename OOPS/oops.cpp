#include<iostream>
using namespace std;

class fruit{

    string name;
    string color;
};

int main(){

    fruit apple; //object 
    apple.name = "Red";
    apple.color =" apple ";
    cout<<apple.name<<" - "<<apple.color<<endl;
           //this is how i can create the object of type fruit
    return 0;
}