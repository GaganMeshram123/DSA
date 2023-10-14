#include<iostream>
using namespace std;
int main(){  if(root->val == key) return NULL;
        else if(root->val  > key){
            root->left = deleteNode(root->left,key);
        }
        else{
            root->right = deleteNode(root->right,key);
        }
        return root;
    }
}
   