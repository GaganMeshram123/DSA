#include <bits/stdc++.h>
using namespace std;

void pattern15(int N)
{
      for(int i=0;i<N;i++){
          
          // Inner loop will loop for i times and
          // print alphabets from A to A + (N-i-1).
          for(char ch = 'A'; ch<='A'+(N-i-1);ch++){
              cout<<ch<<" ";
              
          }
          // As soon as the letters for each iteration are printed, we move to the
          cout<<endl;
          
      }
}

int main()
{   
    int N = 5;
    pattern15(N);

    return 0;
}