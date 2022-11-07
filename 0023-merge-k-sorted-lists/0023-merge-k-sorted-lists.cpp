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
class compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val>b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*head=new ListNode(-1);
        ListNode*curr=head;
        
        priority_queue<ListNode* ,vector<ListNode*> ,compare>pq;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i])pq.push(lists[i]);
        }
        
        while(!pq.empty())
        {
            ListNode*temp=pq.top();
            pq.pop();
            curr->next=temp;
            curr=curr->next;
            if(temp->next)pq.push(temp->next);
        }
        return head->next;
    }
};