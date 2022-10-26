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
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head) return head; 
        ListNode*curr=head;
        ListNode*p=curr->next;
        while(p!=NULL)
        {
            if(p->val==curr->val)
            {
                curr->next=p->next;
                p->next=NULL;
                p=curr->next;
            }
            else{
                curr=curr->next;
                p=p->next;
            }
        }
        return head;
            
            
    }
};