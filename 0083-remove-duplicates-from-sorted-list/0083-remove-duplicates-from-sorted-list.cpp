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
        ListNode*temp=new ListNode(-101);
        temp->next=head;
        head=temp;
        
        ListNode*prev=head;
        ListNode*curr=head->next;
        
        while(curr!=NULL)
        {
            while(prev->val==curr->val)
            {
                prev->next=curr->next;
                curr->next=NULL;
                curr=prev->next;
                if(curr==NULL)
                    return head->next;
            }
            curr=curr->next;
            prev=prev->next;
        }
        return head->next;
    }
};