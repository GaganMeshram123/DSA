#include <bits/stdc++.h>
using namespace std;

 int kthGrammar(int n, int k){
    if(n==1) return 0;
    if(k%2==0){//flip, k/2
        int preans==kthGrammar(n-1.k/2);
        if(preans==0) return 1;
        else return 0;
    }
    else{
        int preans = kthGrammar(n-1,k/2+1);
        return preans;
    }
 }
int main()
{   
    int N = 5;
    pattern14(N);

    return 0;
}