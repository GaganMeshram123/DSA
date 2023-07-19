#include<iostream>
#include<vector>
int main(){
     int m =numrows;
        vector<vector<int> > v;
        for(int i=1;i<=5;i++){
            vector<int> a(i);
            v.push_back(a);
        }   
        //generate
        for(int i=0;i<5;j++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
            v[i][j]=1;
            else 
            v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
        }
        return v;
                   }
         int main(){
         vector<vector<int> > v = pascal(3);
         }          

         for(int i=0;i<v.size;j++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
      cout <<endl;
    }
};
}