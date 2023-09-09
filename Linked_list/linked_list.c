#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node * first=NULL;
    first = (struct Node *) malloc(sizeof(struct Node));
    first->data=0;
    first->next=NULL;
    struct Node *t,*last;
    last=first;
    int x;
    printf("enter 5 no.");
    for(int i = 1;i<6;i++){
        scanf("%d",&x);
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->next=NULL;
        last->next=t;
        last=t;
    }
  first=first->next;
    while(first!=NULL){
        printf("%d ",first->data);
        first=first->next;
    }
    return 0;
}
