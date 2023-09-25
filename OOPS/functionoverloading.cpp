#include<iostream>
using namespace std;
class ABC{
    int x;

    public:
     void add(int x, int y){   //function defination kartoy 
        int sum = x+y;
        cout<<sum<<endl;
     }

     void add( int x,int y, int z){
        int sum = x+y+z;
        cout<<sum<<endl;
     }

     void add(float x,float y){
        float sum = x+y;
        cout<<sum<<endl;
     }
    };

    int main(){
      sum s;
      s.add(2,3);
      s.add(2,3,4);//depends upon ham kitne paramneters pass karte hai 
      s.add( 2,3,2,7);
        
    }