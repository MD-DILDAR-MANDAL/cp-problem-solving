//https://leetcode.com/problems/reverse-linked-list-ii/description/

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       ListNode* curr;
       ListNode* prev;
       ListNode* next;
       ListNode* first2;
       curr = head;
       prev = nullptr;
       next = curr->next;
       int start=left;
       int finish=right;

       if(left-right ==0)
       return head;

       ListNode* first=curr;

       while(--start && curr!=NULL){
        if(start==1)first=curr;
        curr = curr->next;
       }
       first2=curr;

       int tmp = right - left+1;

       while(tmp-- && curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;
       }
       if(first!=first2){
           first->next = prev;
           first2->next=curr;
            return head;
       }
       first->next=curr;
       return prev;

    }
};