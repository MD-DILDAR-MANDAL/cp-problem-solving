//https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL)
            return head;
        if(n==0)
            return head;

        ListNode* dummy = head;
        int count=0;

        while(dummy!=NULL){
            count++;
            dummy=dummy->next;
        }
        delete dummy;
        if(count == n){
            dummy=head->next;
            return dummy;
        }

        count -= n;
        int cntr=1;
        dummy= head;
        ListNode* tmp;
        while(cntr<count && dummy!=NULL){
            dummy = dummy->next;
            cntr++;
        }
        tmp = dummy->next;
        dummy->next = tmp->next;
        return head;
    }
};