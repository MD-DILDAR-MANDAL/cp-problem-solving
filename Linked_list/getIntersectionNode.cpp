/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *findNode(ListNode *headA, ListNode *headB)
    {
        while (headA != NULL || headB != NULL)
        {
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *tmp1 = headA;
        ListNode *tmp2 = headB;
        int cnt1 = 0, cnt2 = 0;

        while (tmp1 != NULL)
        {
            cnt1++;
            tmp1 = tmp1->next;
        }
        while (tmp2 != NULL)
        {
            cnt2++;
            tmp2 = tmp2->next;
        }
        int diff = abs(cnt1 - cnt2);

        if (cnt1 <= cnt2)
        {
            while (diff--)
            {
                headB = headB->next;
            }
            return findNode(headA, headB);
        }
        else
        {
            while (diff--)
            {
                headA = headA->next;
            }
            return findNode(headA, headB);
        }
        return NULL;
    }
};