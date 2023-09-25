#include <bits/stdc++.h>
#include<vector>
using namespace std;
void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i=0;//a
    int j=0;//b
    int k=0;//res
    while(i<a.size() && j<b.size()){//a is at the end 
        if(a[i]<b[j]) res[k++] = a[i++];
        else res[k++]= b[j++];
        }
        if(i==a.size(){//b isa at the end 
    while(j<b.size()){
        res[k++] = b[i++];
    }
        }
    }
 
int main()
{   
    int a[]= {1,4,5,8};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+1);
    int brr[] = {2,3,4,5,8};
    int n2 = sizeof(brr)/sizeof(brr[0]);
    vector<int> res(n1+n2);
    return 0;
}