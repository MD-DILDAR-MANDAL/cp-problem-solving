#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
}*first=NULL;

void create(int A[],int n){
  first=(struct Node *)malloc(sizeof(struct Node*));
  first->data=A[0];
  first->next=NULL;
  
  struct Node *t,*last;
  last=first;
  for(int i=1;i<n;i++){
    t=(struct Node *)malloc(sizeof(struct Node*));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
}

/*void display(struct Node * p){
  while(p!=NULL){
    printf("%d ",p->data);
    p=p->next;
  }
}*/

int main(){
  int A[]={2,5,69,26,8,0},cnt=0;
  create(A,6);
  //display(first);
  while(first!=NULL){
    cnt++;first
    first=first->next;
  }
  printf("\n%d",cnt);
  return 0;
}
