#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)//from here the curser will move from one to another 
    cin>> arr[i];
}
//precompute
int hash[10000000] = (0);
for(int i=0;i<n; i++){
    hash[arr[i]] == 1;

}
int q;
cin>>q;

while(q--){
    int number;
    cin>>number;
    //fetch
    cout<<hash[number]<<endl;
}
