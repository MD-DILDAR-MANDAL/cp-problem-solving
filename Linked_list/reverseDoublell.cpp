#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* next;
        Node* back;
    Node(int data){
        val=data;
        next=NULL;
        back=NULL;
    }
    Node(int data, Node * next1,Node * next2){
        val=data;
        next=next1;
        back=next2;
    }
};
Node* reversedll(Node* head);

int main(){
   Node* head = new Node(1);

   head->next = new Node(2);
   head->next->back=head;

   head->next->next=new Node(3);
   head->next->next->back=head->next;

   head->next->next->next=new Node(4);
   head->next->next->next->back=head->next->next;

   Node* dummy= reversedll(head);
   dummy=head;
   while(dummy!=NULL){
      cout<< dummy->val<<" ";
      dummy=dummy->back;
   } 

}

Node* reversedll(Node* head){
    Node * dummy=head;
    if(dummy->next==NULL){
        dummy->back=NULL;
        return dummy;
    }

    Node* next=NULL;
    Node* curr=dummy;
    Node* prev=NULL;

    Node* newHead =reversedll(dummy->next);

    next = curr->next;
    next->next=curr;
    curr->next=prev;
    curr->back=next;

    return newHead;
}