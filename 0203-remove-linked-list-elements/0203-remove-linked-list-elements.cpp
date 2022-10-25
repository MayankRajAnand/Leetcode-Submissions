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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return NULL;
        
        ListNode*temp=new ListNode(-1);
        temp->next=head;
        head=temp;
        
        ListNode* curr=head->next;      
        ListNode* prev=head;
        
        
        while(curr!=NULL)
        {
            while(curr->val==val)
            {
                prev->next=curr->next;
                curr->next=NULL;
                curr=prev->next;
                if(curr==NULL)
                    return head->next;
            }
            
            prev=curr;
            curr=curr->next;
        }
        return head->next;
    }
};