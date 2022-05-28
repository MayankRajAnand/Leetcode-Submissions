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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        int sum=0;
        ListNode* p=l1;
        ListNode* q=l2;
        ListNode*ans=new ListNode(-1);
        ListNode*last=ans;
        while(p!=NULL && q!=NULL)
        {
            sum=p->val+q->val+carry;    
            if(sum<10)
            {
                carry=0;
                last->next=new ListNode(sum);
                last=last->next;
            }
            else{
                carry=sum/10;
                last->next=new ListNode(sum%10);
                last=last->next;
            }
            p=p->next;
            q=q->next;   
            
        }
        while(p!=NULL)
        {
            sum=p->val+carry;
            if(sum<10)
            {
                carry=0;
                last->next=new ListNode(sum);
                last=last->next;
            }
            else{
                carry=sum/10;
                last->next=new ListNode(sum%10);
                last=last->next;
            }
            p=p->next;
        }
        if(carry!=0)
        {
           last->next=new ListNode(carry); 
        }
        while(q!=NULL)
        {
            sum=q->val+carry;
            if(sum<10)
            {
                carry=0;
                last->next=new ListNode(sum);
                last=last->next;
            }
            else{
                carry=sum/10;
                last->next=new ListNode(sum%10);
                last=last->next;
            }
            q=q->next;
        }
        if(carry!=0)
        {
           last->next=new ListNode(carry); 
        }
        ans=ans->next;
        return ans;   

    }
    
    
    
};