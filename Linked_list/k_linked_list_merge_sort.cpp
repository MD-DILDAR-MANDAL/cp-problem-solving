class Solution {
public:
ListNode * mergeTwoList(ListNode * l1,ListNode * l2){

     ListNode * dummy= new ListNode(0);
     ListNode * ans=dummy;
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

    ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.size() == 0)return NULL;
    for(int i=1;i<lists.size();i++){
        lists[0]=mergeTwoList(lists[0],lists[i]);
    }
    return lists[0];
    }
};
