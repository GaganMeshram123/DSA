#include<iostream>
using namespace std;
void print11(int n){
     for(int i=1; i<n; i++){
        //numbers 
        for(int j=1;j<=i;j++){
            cout<< j ;
        }
        //space
         for(int j=1; j<=space; j++){
            cout<< j ;
         }


         //numbers 
         for(int j=1; j>=1;j--){   //there is a decreasing in the numbers 
            cout<< j;
         }
         cout<<endl;
         space-=2;
     }
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
   int n ;
   cin>>n;
   print11(n); 
}  
}
 