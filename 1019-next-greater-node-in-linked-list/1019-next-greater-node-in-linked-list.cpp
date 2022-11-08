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
    ListNode* reverseL(ListNode *head)
    {
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        while(curr!=NULL)
        {
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        if(head==NULL)return ans;
        stack<int>st;
        ListNode*curr=reverseL(head);
        
        while(curr!=NULL)
        {
            int val=curr->val;
            if(st.empty())
            {
                ans.push_back(0);
                st.push(curr->val);
                curr=curr->next;
            }
            else if(st.top()>curr->val)
            {
                ans.push_back(st.top());
                st.push(curr->val);
                curr=curr->next;
            }
            else{
                st.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};