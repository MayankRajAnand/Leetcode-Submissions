/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        if(pre.size()!=in.size())
            return NULL;
        unordered_map<int,int>m;
        for(int i=0;i<in.size();i++)
        {
            m[in[i]]=i;
        }
        
        TreeNode *root=build(pre,0,pre.size()-1,in,0,in.size()-1,m);
        return root;
    }
    
    TreeNode*build(vector<int>&pre,int pres,int pree ,vector<int>&in ,int ins,int ine ,unordered_map<int,int>&m)
    {
        if(pres>pree || ins>ine)
            return NULL;
        TreeNode *root=new TreeNode(pre[pres]);
        
        int inroot=m[root->val];
        int nums=inroot-ins;
        
        root->left=build(pre,pres+1,pres+nums,in,ins,inroot-1,m);
        root->right=build(pre,pres+1+nums,pree,in,inroot+1,ine,m);
        
        return root;
    }
};