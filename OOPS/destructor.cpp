#include<iostream>
using namespace std;

class rectangle{
public:
  int l;
  int b;

  rectangle(){  //default constructor - no arguments passed 
  l = 0;
  b = 0;

  }

  rectangle(){// paramerterised contructor- arr passed
    l = x;
    b = y;

  }

  rectangle(rectangle){ //copy constructor - initialize an obj by another obj
// yahape hum pass karte hai the obj of the same class 
 l = r.l;
 b = r.b;
  }

  ~rectangle(){ // destructor 
    cout<<"destructor is called";
  }
};

int main(){
    rectangle* r1 = new rectangle();
    cout<<l.1<<" "<<r1.b<<endl;
    delete r1; 

    rectangle r2( 3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    rectangle r3 = r2;
    cout<<3.l<<" "<<r3.b<<endl;

    return 0;

     return 0;
}