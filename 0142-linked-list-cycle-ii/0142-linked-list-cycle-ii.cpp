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
        ListNode*fast=head;
        int i=0;
        unordered_map<ListNode*,int>m;
        while(fast!=NULL)
        {
            if(m.find(fast)!=m.end())
            {
                return fast;
            }
            m[fast]=i;
            fast=fast->next;
            i++;
        }
        return NULL;
    }
};