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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> result;
    if (root == nullptr) return result;

    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> levelNodes;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* current = q.front();
            q.pop();
            levelNodes.push_back(current->val);

            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }

      
        if (!leftToRight) {
            reverse(levelNodes.begin(), levelNodes.end());
        }

        result.push_back(levelNodes);
        leftToRight = !leftToRight;  
    }

    return result;
    }
};
