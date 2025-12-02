#include <iostream>
using namespace std;
class Node{
public:
    Node* next;
    int value;
    Node(int v);
    ~Node();
};
Node::Node(int v){
    value=v;
    next=nullptr;
}
Node::~Node(){
    cout<<value<<" numbered node deleted."<<endl;
}
void add(Node* head, int v){
    if(head->next==nullptr){
        head->next=head;
    }
    Node* new_node = new Node(v);
    Node* curr = head;
    while(curr->next!=head)
        curr=curr->next;
    curr->next=new_node;
    new_node->next=head;
}
void del(Node* curr){
    Node* delling = curr->next;
    curr->next = curr->next->next;
    delete delling;
}
void print(Node* head){
    Node* curr = head;
    while(curr){
        cout<<curr->value<<"->";
        curr=curr->next;
        if(curr==head)
            break;
    }
    cout<<endl;
}
int main(){
    int k=41;
    Node* head = new Node(1);
    for(int i=2;i<k+1;i++)
        add(head,i);
    print(head);
    Node* curr = head;
    while(curr->next!=curr){
        del(curr);
        curr=curr->next;
    }
    cout<<curr->value<<" numbered value survived!"<<endl;
    return 0;
}
