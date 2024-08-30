// https://leetcode.com/problems/palindrome-linked-list/
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
    bool isPalindrome(ListNode* head) {
        ListNode* dummy = head;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast= fast->next->next;
            slow=slow->next;
        } 

        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        ListNode* next = NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        while(prev!=NULL){
            if(head->val != prev->val){
                return false;
            }
                head=head->next;
                prev=prev->next;
        }
        return true;      
    }
};