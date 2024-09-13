//https://leetcode.com/problems/copy-list-with-random-pointer/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head){
    if(head==NULL){
        return NULL;
    }
     Node* dummy=head;
     Node* cpHead=new Node(dummy->val);
     Node* cpdummy=cpHead;
     Node* tmp;
     while(dummy != NULL){
        tmp=dummy -> next;
        dummy->next = new Node(dummy->val);
        dummy->next->next=tmp;
        dummy = tmp;
     }

     dummy=head;
     while(dummy!=NULL && dummy->next!=NULL){
        if(dummy->random != NULL){
         dummy->next->random=dummy->random->next;
        }
        dummy=dummy->next->next;
     }

     dummy=head;
     Node* cp=head->next;
     while(dummy!=NULL){
        tmp=dummy->next;
        dummy->next=dummy->next->next;
        if(tmp->next!=NULL)
        tmp->next=tmp->next->next;
        dummy=dummy->next;
     }
        return cp;
    }
};