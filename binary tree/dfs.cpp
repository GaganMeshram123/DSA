#include<iostream>
using namespace std;
class Node{//we can say this is a tree node 
public:
	int val;
	Node*left;
	Node*right;
	Node(int val){//constructor
	this->val = val;
	this->left= NULL;
	this->right = NULL;
		
	}
};
void preorder(Node* root){//preorder=root-left-right
	if(root==NULL) return;//base condition 
	cout<<root->val<<" ";//root
	preorder(root->left);//left 
	preorder(root->right);//right	
}

void Inorder(Node* root){//inorder=left-root-right
	if(root==NULL) return;//base condition 
	preorder(root->left);//left 
	cout<<root->val<<" ";//root
	preorder(root->right);//right	
}
void postorder(Node* root){//postorder=left-right-root 
	if(root==NULL) return;//base condition 
	preorder(root->left);//left 
	preorder(root->right);//right
	cout<<root->val<<" ";//root	
}

void nthlevel(Node* root, int curr, int level){//preorder=root-left-right
	if(root==NULL) return;//base condition 
	if(curr==level) cout<<root->val<<" ";//root
	nthlevel(root->left, curr+1, level);//left 
    nthlevel(root->right, curr+1, level);//right	
}
int main(){
	Node* a=new Node(3);
	Node* b=new Node(4);
	Node* c=new Node(5);
	Node* d =new Node(6);
	Node* e =new Node(7);
	Node* f =new Node(9);
	Node* g =new Node(10);

	//ata conections banavaych ahe 
	a->left = b;
	a->right = c;
	b->left = d;
	c->right =e;
	c->right =g;
	nthlevel(a,1,2);
	cout<<endl;

}