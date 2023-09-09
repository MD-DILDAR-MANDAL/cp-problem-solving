#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

 struct ListNode * mergeTwoList(struct ListNode * l1,struct ListNode * l2){

     struct ListNode * dummy= NULL;
     struct ListNode * ans=NULL;
     dummy=(struct ListNode *)malloc(sizeof(struct ListNode));
     ans=dummy;
    while(l1!=NULL && l2!=NULL){
        if(l1->val <= l2->val){
            ans->next=l1;
            l1=l1->next;
        }
        else{
            ans->next=l2;
            l2=l2->next;
        }
        ans=ans->next;
    }
    if(l1==NULL)ans->next=l2;
    else if(l2==NULL)ans->next=l1;

    return dummy->next;

 }

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    if(listsSize == 0)return NULL;
    for(int i=1;i<listsSize;i++){
        lists[0]=mergeTwoList(lists[0],lists[i]);
    }
    return lists[0];
}
