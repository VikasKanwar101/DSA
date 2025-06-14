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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int> ans;
        if(root==NULL) return ans;
        s.push(root);
        while(!s.empty()){
            TreeNode* node=s.top();
            s.pop();
            ans.push_back(node->val);
            if(node->left!=NULL)
            s.push(node->left);
            if(node->right!=NULL)
            s.push(node->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};