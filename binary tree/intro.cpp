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
void displayTree(Node* root){
	if(root==NULL) return;
	cout<<root->val<<" ";
	displayTree(root->right);
	displayTree(root->left);
	
}
int sum (Node*root){
	if(root==NULL) return 0;
	int leftSum = sum(root->left);
	int rightSum = sum(root->right);
	int ans = root->val + sum(root->right) + sum(root->left);
	return ans;
}

int maxInTree(Node* root){
	if(root==NULL) return INT_MIN;//for negativ no. it is more benificial
	int lMax = maxInTree(root->left);
	int rMax = maxInTree(root->right);
	return max(root->val,max(lMax,rMax)); 
}
int levels(Node* root){
	if(root==NULL) return 0;
	return 1+ max(levels(root->left),levels(root->right));
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
	displayTree(a);
	cout<<endl;
	cout<<sum(a)<<endl;
    cout<<maxInTree(a)<<endl;
    cout<<levels(a)<<endl;


}