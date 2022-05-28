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
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        if(in.size()!=post.size())
            return NULL;
        unordered_map<int,int>m;
        for(int i=0;i<in.size();i++)
            m[in[i]]=i;
        TreeNode *root=build(in,0,in.size()-1,post,0,post.size()-1,m);
        return root;
    }
    TreeNode* build(vector<int>&in ,int ins ,int ine ,vector<int>&post,int posts,int poste,unordered_map<int,int>&m)
    {
        if(posts>poste || ins>ine)
            return NULL;
        TreeNode *root=new TreeNode(post[poste]);
        int inroot=m[post[poste]];
        int nums=inroot-ins;
        root->left=build(in,ins,inroot-1,post,posts,posts+nums-1,m);
        root->right=build(in,inroot+1,ine,post,posts+nums,poste-1,m);
        
        return root;
    }
};