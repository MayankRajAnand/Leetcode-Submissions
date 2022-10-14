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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode*temp=head;
        ListNode*p1=temp;
        ListNode*p2=temp->next;
        ListNode*p3=head;
        while(p2!=NULL and p2->next!=NULL)
        {
            p3=p1;
            p1=p1->next;
            p2=p2->next->next;
            
        }
        if(p2==NULL)
        {
            p3->next=p1->next;
            p1->next=NULL;
            delete p1;
        }
        else if(p2->next==NULL){
            temp=p1->next;
            p1->next=temp->next;
            temp->next=NULL;
            delete temp;
        }
        
        return head;     
        
        
    }
};