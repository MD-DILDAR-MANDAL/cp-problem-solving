/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL){
            return NULL;
        }

        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int cnt = 0;

        ListNode* tmp =head;
        while(tmp!=NULL && cnt<k){
            cnt++;
            tmp = tmp->next;
        }
        if(cnt<k){
            return head;
        }
        while(cnt-- && curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        if(next!=NULL){
            head->next = reverseKGroup(next,k);
        }
        return prev;
    
    }
};