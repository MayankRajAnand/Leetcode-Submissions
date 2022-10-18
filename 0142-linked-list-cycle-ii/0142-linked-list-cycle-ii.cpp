/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        bool flag=true;
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=NULL and fast->next!=NULL and flag)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                flag=false;
            }
        }
        if(flag==true)
            return NULL;
        fast=head;
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
};