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
    int height(TreeNode* l)
    {
        if(l==NULL) return 0;
        int lh=height(l->left);
        int rh=height(l->right);
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return true;
        int left=height(root->left);
        int right=height(root->right);
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        if(abs(left-right)<=1 && l && r)
        return true;
        else
        return false;
    }
};