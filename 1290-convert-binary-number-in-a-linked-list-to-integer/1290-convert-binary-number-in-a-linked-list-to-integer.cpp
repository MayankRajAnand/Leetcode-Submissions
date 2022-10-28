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
    ListNode* reverse(ListNode *head)
    {
        if(head==NULL)
            return NULL;
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*temp=NULL;
        while(curr!=NULL)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
        
    }
    int getDecimalValue(ListNode* head) {
        if(head==NULL)
        {
            return 0;
        }
        ListNode*root=reverse(head);
        
        int c=0;
        int ans=0;
        while(root!=NULL)
        {
            ans=ans+ (root->val*pow(2,c));
            root=root->next;
            c++;
        }
        return ans;
    }
};