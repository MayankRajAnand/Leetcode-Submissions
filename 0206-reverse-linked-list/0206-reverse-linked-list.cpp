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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*q=curr->next;
        
        while(q!=NULL)
        {
            curr->next=prev;
            prev=curr;
            curr=q;
            q=q->next;
        }
        curr->next=prev;
        return curr;
    }
};