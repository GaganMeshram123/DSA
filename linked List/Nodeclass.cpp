#include<iostream>
using namespace std;
class Node{
    public:
     int val;
     Node* next; //yahape agle wale ka address stoe hoga }

}
//hamko yahape without array work karna hai 
int main(){
// 10 20 30 50
 Node a;
 a.val = 10;      // itna likne se accha we  willuse the constructors
 Node b;
 b.val = 20;
 Node c;
 c.val = 30;
 Node d;
 d.val = 40;
 //forming the linked list now by printing the address
 a.next =&b;//a ke node me b ka address
 b.next =&c;
 c.next =&d;
 d.next =&NULL;
 
} 