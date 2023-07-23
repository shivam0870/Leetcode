class Solution {
private:
    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        
        int h1 = height(root->left);
        int h2 = height(root->right);
        int ans = max(h1 , h2) + 1;
        return ans;
    }
    
    void solve(TreeNode* root , int &sum , int ht , int lvl){
        if(root == NULL)
            return;
        
        if(root->left == NULL && root->right == NULL && lvl == ht){
            sum += root->val;
        }
        
        solve(root->left , sum , ht , lvl+1);
        solve(root->right , sum , ht , lvl+1);
    }
    
public:
    int deepestLeavesSum(TreeNode* root) {
        //find the height of the binary tree;
        int ht = height(root);
        cout<<ht;
        //find the leaf nodes at that height and find their sum.
        int sum = 0;
        solve(root , sum , ht , 1);
        return sum;
    }
};
