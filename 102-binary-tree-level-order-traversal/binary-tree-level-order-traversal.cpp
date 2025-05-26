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
    std::vector<std::vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> result;

        // If the tree is empty, return an empty result.
        if (root == nullptr) {
            return result;
        }

        // Use a queue for BFS. Store TreeNode pointers.
        std::queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            // Get the number of nodes at the current level.
            int levelSize = q.size();
            std::vector<int> currentLevelNodes;

            // Process all nodes at the current level.
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = q.front();
                q.pop();

                currentLevelNodes.push_back(currentNode->val);

                // Add left child to the queue if it exists.
                if (currentNode->left != nullptr) {
                    q.push(currentNode->left);
                }
                // Add right child to the queue if it exists.
                if (currentNode->right != nullptr) {
                    q.push(currentNode->right);
                }
            }
            // After processing all nodes at the current level, add their values to the result.
            result.push_back(currentLevelNodes);
        }

        return result;
    }
};