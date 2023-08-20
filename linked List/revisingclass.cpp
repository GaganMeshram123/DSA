#include<iostream>
using namespace std;
class Student{
public:
string name;
int rollno;
float marks;
Student( string n, int r, float m){// constructor 
   this->name = n ;
   this->rollno = r;
   this->marks = m;

}
};
int main(){

    Student s("Gagan", 76, 92.6);
    cout<<s.name;

}