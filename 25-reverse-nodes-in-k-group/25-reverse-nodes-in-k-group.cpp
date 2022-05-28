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
  static ListNode* th=NULL;
    static ListNode* tt=NULL;
class Solution {
public:
  
    void addFirst(ListNode* node)
    {
        if(th==NULL)
        {
            th=node;
            tt=node;
        }
        else{
            node->next=th;
            th=node;
        }
    }
    int length(ListNode* head)
    {
        int cnt=0;
        ListNode* p=head;
        while(p!=NULL)
        {
            cnt++;
            p=p->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL ||head->next==NULL ||k==1)
            return head;
        ListNode *oh=NULL,*ot=NULL;
        int n=length(head);
        ListNode*curr=head;
        while(n>=k)
        {
            int temp=k;
            while(temp-->0)
            {
                ListNode*forw=curr->next;
                curr->next=NULL;
                addFirst(curr);
                curr=forw;
            }
            if(oh==NULL)
            {
                oh=th;
                ot=tt;
            }
            else{
                ot->next=th;
                ot=tt;
                    
                
            }
            th=NULL;
            tt=NULL;
            n-=k;
        }
        ot->next=curr;
        return oh;
    }
};