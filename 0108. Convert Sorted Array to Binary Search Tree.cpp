class Solution {
public:
    TreeNode* fil(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr; 

        int mid = left + (right - left) / 2;  
        TreeNode* root = new TreeNode(nums[mid]);  

        root->left = fil(nums, left, mid - 1);  
        root->right = fil(nums, mid + 1, right);  

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return fil(nums, 0, nums.size() - 1);  
    }
};
