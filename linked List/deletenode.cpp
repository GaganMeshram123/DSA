#include<iostream>
using namespace std;
class Node{
 //user defined data ttype 
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node*head){
    while(head!>NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
 Node* deletenode(node* head,Node*target){
    if(head==target){//if head hi target ho to 
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next!=target){//yahape hum target ke pehele tak ayenge from this condition
    temp = temp->next;
    }
    temp->next=temp->next->next;
    return head;

}
int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    deletenode(a,d);
    
    }