#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int val;
     Node* next;
     Node* back;
        
     Node(int data){
        val=data;
        next=nullptr;
        back=nullptr;
     }

     Node(int data,Node* next1,Node* back1){
        val=data;
        next=next1;
        back=back1;

     }
};
Node* nodeAdd(Node* head,int k);
int main(){
   Node* head = new Node(1);

   head->next = new Node(2);
   head->next->back=head;

   head->next->next=new Node(3);
   head->next->next->back=head->next;

   head->next->next->next=new Node(4);
   head->next->next->next->back=head->next->next;

   int k=6;
   Node* dummy= nodeAdd(head,k);
   while(dummy!=NULL){
      cout<< dummy->val<<" ";
      dummy=dummy->next;
   } 
}

Node* nodeAdd(Node* head,int k){
   
   if(head==NULL)return head=new Node(k);
   
   Node* dummy=head;

   while(dummy!=NULL){
      if(dummy->next==NULL){
         dummy->next=new Node(k);
         dummy->next->back=dummy;
         break;
      }
      dummy=dummy->next;
   }
   return head;
}