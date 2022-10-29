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
    bool isMirror(TreeNode*a ,TreeNode*b)
    {
        if(a==NULL and b==NULL)return true;
        if(a==NULL or b==NULL)return false;
        
        return (a->val==b->val and isMirror(a->left,b->right) and isMirror(a->right,b->left));
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode*a=root;
        TreeNode*b=root;
        
        return isMirror(a,b);
    }
};