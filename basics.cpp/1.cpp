#include<iostream>
using namespace std;
void print11(int n){
    int start=1;
    for(int i=0; i<n; i++){
        if(i % 2 == 0) start=1; //even asla tar apan asa karton 
        else start=0
        for(int j=0; j<=i; j++){
            cout<< start;
            start = 1-start; // its the condition of flip 
        }
        cout<< endl;
    }
}
int main()
int t;
cin>>t;
for(int i=0;i<t;i++){
   int n ;
   cin>>n;
   print11(n);

}
