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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        if(n>c)
            return NULL;
        if(n==c)
        {
            temp=head;
            head=temp->next;
            temp->next=NULL;
        }
        else{
            temp=head;
            for(int i=0;i<c-n-1;i++)
            {
                temp=temp->next;
            }
            ListNode* p=temp->next;
            temp->next=p->next;
            p->next=NULL;
            
        }
        return head;
    }
};