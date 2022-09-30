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
    
    TreeNode* helper(vector<int>& nums, int left,int right){
        if(left>right)
            return NULL;
        int maxi = left;
        for(int i =left; i<=right; i++){
            if(nums[i] > nums[maxi])
                maxi = i;
        }
        TreeNode* root = new TreeNode(nums[maxi]);
        root->left = helper(nums,left,maxi-1);
        root->right = helper(nums,maxi+1,right);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
    }
};









