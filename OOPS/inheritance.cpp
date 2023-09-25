#include<iostream>
using namespace std;//inherits the properties of the class


class parent{

    public: 
    int x;

    protected;
    int y;

    private;
    int z;


};

class child: public parent {
    // x will remain public
    //y will remain protected 
    //z will not be inaccessible                         
    
    
     //public keyword add karne se all properties of theparents comes into child 
}