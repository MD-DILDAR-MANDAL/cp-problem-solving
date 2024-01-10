#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;

	Node(int val){
		data = val;
		next = NULL;
	}
};

void insert(Node* &head,int val){
	Node* n=new Node(val);
	if(head==NULL){
		head=n;
		return;
	}
	Node* tmp=head;
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	tmp->next=n;
}
void display(Node* head){
	Node* tmp=head;
	while(tmp!=NULL){
		cout<< tmp->data<<" ";
		tmp=tmp->next;
	}
}
int main(){
	Node* list =NULL;
	insert(list,1);
	insert(list,2);
	insert(list,9);
	display(list);
}
