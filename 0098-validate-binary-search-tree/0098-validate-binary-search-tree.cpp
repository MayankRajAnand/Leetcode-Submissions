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
    bool helper(TreeNode*root, long mini,long maxi)
    {
      if (!root)
            return true;
        if(root->val >=maxi or root->val <=mini)return false;
        return ( helper(root->left,mini,root->val) and helper(root->right,root->val,maxi));
    }
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        long mini=LONG_MIN;
        long maxi=LONG_MAX;
        return helper(root,mini,maxi);
    }
};