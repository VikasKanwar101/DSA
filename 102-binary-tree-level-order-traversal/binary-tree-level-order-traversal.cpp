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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        return ans;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int> a;
            for(int i=0;i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                TreeNode* l=node->left;
                TreeNode* r=node->right;
                if(l!=NULL)
                q.push(l);
                if(r!=NULL)
                q.push(r);
                a.push_back(node->val);
            }
            ans.push_back(a);
        }
        return ans;
    }
};
    
