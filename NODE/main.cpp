#include <bits/stdc++.h>
using namespace std;

// node class to represent a node of the linked list 
class node{
public:
    int data;
    node* next;
    
//parametarised constructor
        node(int val){
        data = val;
        next = NULL;
        }
};

//function to insert a new node
void insert_at_tail(node* &head,int val){
    
    //create the  new node
    node* n = new node(val);
    
    //assign to head
    if(head == NULL){
        head = n;
        return;
        }
    //traverse till end of list
    node* temp = head;
    while(temp->next != NULL){
        //update temp
        temp = temp->next;
        }
        //insert at the last
        temp->next = n;
}
//function to print the nodes of the linked list
void display(node* head){
    node* temp = head;
    //traverse the list
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
        }
}
//function to insert at head 
void insert_at_head(node* &head,int val){
    //create the new node
    node* n = new node(val);
    n->next = head;
    head = n;
    }

int main(){
    //creating head and giving value NULL , for inserting at head
    node* head = NULL;
          
    insert_at_tail(head,5);     
    insert_at_tail(head,3);
    insert_at_tail(head,8);
    display(head);
	return 0;
}
